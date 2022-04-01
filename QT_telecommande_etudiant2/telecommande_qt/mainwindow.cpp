#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <filesystem>
#include <QFile>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Definition de l'intervalle de valeurs pour les barres de progression
    ui->progressBar_waiting->setMinimum(0);
    ui->progressBar_waiting->setMaximum(100);
    ui->progressBar_waiting->setValue(0);

    ui->progressBar_co_lost->setMinimum(0);
    ui->progressBar_co_lost->setMaximum(100);
    ui->progressBar_co_lost->setValue(0);

    //création de 3 timer auxquels on associra des méthodes...
    timer_co_serv = new QTimer(this);
    timer_verif_co = new QTimer(this);
    timer_progressBar = new QTimer(this);

    //...pour quel la valeur de la barre de progression change
    connect(timer_progressBar,SIGNAL(timeout()),this,SLOT(updateProgressBar()));

    //...un pour essayer de se connecter au serveur
    connect(timer_co_serv,SIGNAL(timeout()),this,SLOT(co_serv()));
    //...qui retente toutes les 3 secondes
    timer_co_serv->start(3000);

    //...un pour tester la connexion
    connect(timer_verif_co,SIGNAL(timeout()),this,SLOT(test_co()));

    //...qui test toutes les secondes
    timer_verif_co->start(1000);

    //Les valeurs sont composées de 3 chiffres max.
    ui->line_edit_value->setMaxLength(3);
    ui->line_edit_pin_security->setMaxLength(3);
    ui->line_edit_pin->setMaxLength(3);

    ui->line_edit_value->setText("0");

    //Cache toutes les box sauf celle pour saisie du code PIN
    ui->gBox_waiting->hide();
    ui->gBox_telec->hide();
    ui->gBox_recap->hide();
    ui->gBox_send->hide();
    ui->gBox_settings->hide();
    ui->gBox_pop_up->hide();

     //Pour saisir la Systole en premier
     ui->lbl_telec_sys->setGeometry(200,140,100,100);
     ui->lbl_telec_dia->hide();
     ui->lbl_telec_pul->hide();

     ui->lbl_answer_trame->hide();
     ui->lbl_pin_security->hide();

     ui->btn_start->setGeometry(180,350,150,90);
     ui->btn_start->hide();

     ui->gBox_waiting->setGeometry(0,0,x_ecran,y_ecran);
     ui->gBox_security->setGeometry(0,0,x_ecran,y_ecran);
     ui->gBox_keyboard->setGeometry(0,380,480,420);

     //Met l'IP et le port du tensiomètre/serveur
    //Client.setIP("192.168.4.2");
     Client.setIP("10.187.52.36");
    Client.setPort(12345);

    //Pour pouvoir stocker le code pin du fichier .txt dans une variable
    QString path = "pin.txt";
    QFile fichier_pin(path);
    QString code_pin;

    if (fichier_pin.open(QIODevice::ReadOnly| QIODevice::Text))
    {
        QTextStream in(&fichier_pin);
        while (!in.atEnd()) {
            code_pin = in.readLine();
        }
        fichier_pin.close();
    }
    setCodePin(code_pin);
}

MainWindow::~MainWindow()
{
    Client.close_connexion();
    delete ui;
}

void MainWindow::test_co(){
    //première connexion
if(Client.socket.state() == QAbstractSocket::ConnectedState){ //regarde l'état de la socket
    ui->gBox_pop_up->hide();
    ui->lbl_waiting->hide();
    ui->progressBar_waiting->hide();
    ui->btn_start->show();
    timer_co_serv->disconnect();//Arret du timer de connexion au serveur
    timer_progressBar->disconnect();//Arret du timer pour la progressbar_waiting
     qDebug() << "Connecté";
     compteur_deco++; //Pour savoir si ça c'est connecté au moins 1 fois
     if(ui->gBox_telec->isVisible() == true)
         ui->gBox_keyboard->show();
}
//déconnexion en cours d'utilisation
if((Client.socket.state() == QAbstractSocket::UnconnectedState) && (compteur_deco != 0)){ 
    connect(timer_co_serv,SIGNAL(timeout()),this,SLOT(co_serv())); //relance du timer de connexion au serveur
    connect(timer_progressBar,SIGNAL(timeout()),this,SLOT(updateProgressBar())); //lancement du timer toute les 50 ms pour la progressbar_co_lost
    ui->gBox_pop_up->setGeometry(0,0,480,800);
    ui->gBox_pop_up->show();
    ui->gBox_keyboard->hide();
    qDebug() << "Déconnecté";
}
}
void MainWindow::co_serv(){
    Client.Connexion_server();
    qDebug() << "Connexion au serveur...";
}
void MainWindow::setCodePin(QString code_pin){
    this->code_pin = code_pin;
}

QString MainWindow::getCodePin(){
    return this->code_pin;
}

void MainWindow::addNumber(QString number){

    //Pour la valeur du code PIN
    if(ui->gBox_security->isVisible() == true){
      ui->line_edit_pin_security->setText(ui->line_edit_pin_security->text() + number);
    }
    //Pour la valeur des constantes
    else if(ui->gBox_telec->isVisible() == true){
        if(ui->line_edit_value->text() == "0") //Permet de remplacer le 0 si c'est le chiffre de la line edit (Évite de devoir faire backspace)
        ui->line_edit_value->setText(number);
     else
          ui->line_edit_value->setText(ui->line_edit_value->text() + number);
        }
    else
        ui->line_edit_pin->setText(ui->line_edit_pin->text() + number);
}

void MainWindow::on_btn_0_clicked()
{
    addNumber("0");
}

void MainWindow::on_btn_1_clicked(){

    addNumber("1");
}


void MainWindow::on_btn_2_clicked()
{
    addNumber("2");
}


void MainWindow::on_btn_3_clicked()
{
    addNumber("3");
}


void MainWindow::on_btn_4_clicked()
{
    addNumber("4");
}


void MainWindow::on_btn_5_clicked()
{
    addNumber("5");
}


void MainWindow::on_btn_6_clicked()
{
    addNumber("6");
}


void MainWindow::on_btn_7_clicked()
{
    addNumber("7");
}


void MainWindow::on_btn_8_clicked()
{
    addNumber("8");
}


void MainWindow::on_btn_9_clicked()
{
    addNumber("9");
}


void MainWindow::on_btn_delete_clicked()
{
    QString Valeur;
    int taille = 0;

    //Pour le code PIN
    if(ui->gBox_security->isVisible() == true){
        Valeur = ui->line_edit_pin_security->text();
        taille = Valeur.size();
        if(taille != 0)
            ui->line_edit_pin_security->setText(Valeur.remove(taille - 1,1)); //Permet d'enlever le dernier chiffre, prend en paramètre la position à
                                                                              //laquelle on a envie de commencer et le nombre de caractère qu'on veut supprimer
    }
    //Pour les constantes
    else if(ui->gBox_telec->isVisible() == true){
        Valeur = ui->line_edit_value->text();
        taille = Valeur.size();
        if(taille != 0)
            ui->line_edit_value->setText(Valeur.remove(taille - 1,1));
        }
    else //Pour le nouveau code PIN
    {
        Valeur = ui->line_edit_pin->text();
        taille = Valeur.size();
        if(taille != 0)
            ui->line_edit_pin->setText(Valeur.remove(taille - 1,1));
    }

}


void MainWindow::on_btn_ok_clicked()
{
    //Si l'utilisateur n'appuie pas sur tout les boutons 'next' permet quand même de transmettre la valeur sur laquelle il se trouve
    if(ui->lbl_telec_sys->isHidden() == false){
     ui->lbl_num_sys->setText(ui->line_edit_value->text());
    ui->lbl_telec_sys->hide();
    ui->line_edit_value->setText(ui->lbl_num_dia->text());
    ui->lbl_telec_dia->show();
    }
    if(ui->lbl_telec_dia->isHidden() == false){
     ui->lbl_num_dia->setText(ui->line_edit_value->text());
    ui->lbl_telec_dia->hide();
    ui->line_edit_value->setText(ui->lbl_num_pul->text());
    ui->lbl_telec_pul->show();
    }
    if(ui->lbl_telec_pul->isHidden() == false){
     ui->lbl_num_pul->setText(ui->line_edit_value->text());
    ui->lbl_telec_pul->hide();
    ui->line_edit_value->setText(ui->lbl_num_sys->text());
    ui->lbl_telec_sys->show();
    }
    ui->gBox_telec->hide();
    ui->gBox_recap->show();
    ui->gBox_recap->setGeometry(0,0,x_ecran,y_ecran);
    ui->gBox_keyboard->hide();

}


void MainWindow::on_btn_return_clicked()
{
    ui->gBox_telec->show();
    ui->gBox_recap->hide();
    ui->gBox_keyboard->show();
    ui->lbl_answer_server->show();
    ui->lbl_answer_trame->hide();

}


void MainWindow::on_btn_next_clicked()
{
    //Synchronise les valeurs des constantes entre la page de saisie et la page récap.
    if(ui->lbl_telec_sys->isHidden() == false){
        ui->lbl_num_sys->setText(ui->line_edit_value->text());
        ui->lbl_telec_sys->hide();
        ui->lbl_telec_dia->setGeometry(200,140,100,100);
        ui->lbl_telec_dia->show();
        ui->line_edit_value->setText(ui->lbl_num_dia->text());
    }

   else if(ui->lbl_telec_dia->isHidden() == false){
        ui->lbl_num_dia->setText(ui->line_edit_value->text());
        ui->lbl_telec_dia->hide();
        ui->lbl_telec_pul->setGeometry(200,140,100,100);
        ui->lbl_telec_pul->show();
        ui->line_edit_value->setText(ui->lbl_num_pul->text());
    }
    else{
        ui->lbl_num_pul->setText(ui->line_edit_value->text());
        ui->lbl_telec_pul->hide();
        ui->lbl_telec_sys->setGeometry(200,140,100,100);
        ui->lbl_telec_sys->show();
        ui->line_edit_value->setText(ui->lbl_num_sys->text());
    }

}


void MainWindow::on_btn_back_clicked()
{
    //Synchronise les valeurs des constantes entre la page de saisie et la page récap.
   if(ui->lbl_telec_dia->isHidden() == false){
        ui->lbl_num_dia->setText(ui->line_edit_value->text());
        ui->lbl_telec_dia->hide();
        ui->lbl_telec_sys->setGeometry(200,140,100,100);
        ui->lbl_telec_sys->show();
        ui->line_edit_value->setText(ui->lbl_num_sys->text());

    }
     else if(ui->lbl_telec_pul->isHidden() == false){
        ui->lbl_num_pul->setText(ui->line_edit_value->text());
        ui->lbl_telec_pul->hide();
        ui->lbl_telec_dia->setGeometry(200,140,100,100);
        ui->lbl_telec_dia->show();
        ui->line_edit_value->setText(ui->lbl_num_dia->text());

    }
   else {
       ui->lbl_num_sys->setText(ui->line_edit_value->text());
       ui->lbl_telec_sys->hide();
       ui->lbl_telec_pul->setGeometry(200,140,100,100);
       ui->lbl_telec_pul->show();
       ui->line_edit_value->setText(ui->lbl_num_pul->text());

   }

}


void MainWindow::on_btn_send_clicked()
{
    ui->gBox_recap->hide();
    ui->gBox_send->show();
    ui->gBox_send->setGeometry(0,0,x_ecran,y_ecran);

    QString trame;
    const char * trame_char = "";

    trame = ui->lbl_num_sys->text() + ":" + ui->lbl_num_dia->text() + ":" + ui->lbl_num_pul->text(); //Protocole de dialogue :  valeur_sys:valeur_dia:valeur_pul
    std::string trame_string = trame.toStdString(); //convertit QString en string
    trame_char = trame_string.c_str(); //convertit string en const char (le format qui convient pour être envoyé)

    try{ //try catch à la place des booléens pour la gestion d'erreurs
    Client.send_trame(trame_char);
    ui->lbl_answer_server->setText("Succes !");
     ui->btn_return_2->hide();
     ui->btn_restart->setGeometry(180,590,130,70);
     ui->btn_error->show();
     ui->lbl_counter->show();
    }
    catch(...){
        ui->lbl_answer_server->setText("Erreur...");
        ui->lbl_counter->hide();
        ui->btn_error->hide();

    }
}


void MainWindow::on_btn_tool_clicked()
{
    ui->gBox_telec->hide();
    ui->gBox_settings->show();
    ui->gBox_settings->setGeometry(0,0,x_ecran,y_ecran);
}


void MainWindow::on_btn_confirm_clicked()
{
    QString nouveau_pin;

    nouveau_pin = ui->line_edit_pin->text();

        QFile fichier_pin("pin.txt");

        if (fichier_pin.open(QIODevice::WriteOnly| QIODevice::Text))
        {
            QTextStream in(&fichier_pin);
            in << nouveau_pin;
            fichier_pin.close();
        }

    ui->gBox_telec->show();
    ui->gBox_settings->hide();


}


void MainWindow::on_btn_cancel_clicked()
{

    ui->line_edit_pin->setText("");
    ui->gBox_telec->show();
    ui->gBox_settings->hide();
}


void MainWindow::on_btn_error_clicked()
{
    int compteur = ui->lbl_counter->text().toInt();
    compteur++;

    ui->lbl_counter->setText(QString::number(compteur));

       QString trame;
       trame = "E";
        const char * trame_char = "";
        std::string trame_string = trame.toStdString();
        trame_char = trame_string.c_str();
         ui->lbl_answer_trame->show();
        try {
            Client.send_trame(trame_char);
             ui->lbl_answer_trame->setText("Succes envoie E (error) !");
        }  catch (...) {
            ui->lbl_answer_trame->setText("Erreur envoie E (error)...");
        }
}




void MainWindow::on_btn_start_clicked()
{
    ui->gBox_waiting->hide();
    ui->gBox_telec->show();
    ui->gBox_keyboard->show();

}


void MainWindow::on_btn_return_2_clicked()
{
    ui->gBox_recap->show();
    ui->gBox_send->hide();
}


void MainWindow::on_btn_restart_clicked()
{

    ui->line_edit_value->setText("0");
    ui->lbl_num_sys->setText("0");
    ui->lbl_num_dia->setText("0");
    ui->lbl_num_pul->setText("0");
    ui->lbl_counter->setText("0");
    ui->gBox_telec->show();
    ui->gBox_send->hide();
    ui->btn_return_2->show();
    //ui->btn_restart->setGeometry(180,590,130,70);
     ui->gBox_keyboard->show();
     ui->lbl_answer_server->show();
     ui->lbl_answer_trame->hide();
}


void MainWindow::on_btn_confirm_security_clicked()
{
    QString PIN = getCodePin();
    QString PIN_enter = ui->line_edit_pin_security->text();

    if(PIN == PIN_enter){
        ui->gBox_security->hide();
        ui->gBox_waiting->show();
        ui->gBox_keyboard->hide();
        timer_progressBar->start(50); //lancement du timer toute les 50 ms pour la progressbar_waiting
    }
    else{
        ui->lbl_pin_security->show();
        ui->line_edit_pin_security->setText("");
    }
}

void MainWindow::updateProgressBar(){

    //Si c'est la barre de progression de la page d'attente est visible
    if(ui->progressBar_waiting->isVisible() == true){
    ui->progressBar_waiting->setValue(ui->progressBar_waiting->value() + 1);
    if(ui->progressBar_waiting->value() == 100)
        ui->progressBar_waiting->setValue(0);
    }
    //...ou celle de la perte de connexion
    else{
        ui->progressBar_co_lost->setValue(ui->progressBar_co_lost->value() + 1);
        if(ui->progressBar_co_lost->value() == 100)
            ui->progressBar_co_lost->setValue(0);
    }
}
