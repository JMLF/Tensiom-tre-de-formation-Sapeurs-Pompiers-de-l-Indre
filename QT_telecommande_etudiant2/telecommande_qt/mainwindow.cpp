#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <fstream>
#include <filesystem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->line_edit_value->setMaxLength(3);
    ui->gBox_telec->hide();
    ui->gBox_recap->hide();
    ui->gBox_send->hide();
    ui->gBox_settings->hide();

     ui->lbl_telec_sys->setGeometry(80,65,40,25);
     ui->lbl_telec_dia->hide();
     ui->lbl_telec_pul->hide();
     ui->lbl_waiting->hide();
     ui->btn_start->setGeometry(60,150,91,31);

     ui->gBox_waiting->setGeometry(0,0,196,327);

    Client.setIP("10.187.52.36");
    Client.setPort(12345);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ajouterChiffre(QString chiffre){

    if(ui->line_edit_value->text() == "0")
        ui->line_edit_value->setText(chiffre);
    else
      ui->line_edit_value->setText(ui->line_edit_value->text() + chiffre);

}

void MainWindow::on_btn_0_clicked()
{
    ajouterChiffre("0");
}

void MainWindow::on_btn_1_clicked(){

    ajouterChiffre("1");
}


void MainWindow::on_btn_2_clicked()
{
    ajouterChiffre("2");
}


void MainWindow::on_btn_3_clicked()
{
    ajouterChiffre("3");
}


void MainWindow::on_btn_4_clicked()
{
    ajouterChiffre("4");
}


void MainWindow::on_btn_5_clicked()
{
    ajouterChiffre("5");
}


void MainWindow::on_btn_6_clicked()
{
    ajouterChiffre("6");
}


void MainWindow::on_btn_7_clicked()
{
    ajouterChiffre("7");
}


void MainWindow::on_btn_8_clicked()
{
    ajouterChiffre("8");
}


void MainWindow::on_btn_9_clicked()
{
    ajouterChiffre("9");
}


void MainWindow::on_btn_delete_clicked()
{
    QString Valeur;
    Valeur = ui->line_edit_value->text();

    int taille = Valeur.size();

    if(taille != 0)
        ui->line_edit_value->setText(Valeur.remove(taille - 1,1));

}


void MainWindow::on_btn_ok_clicked()
{

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
    ui->gBox_recap->setGeometry(0,0,196,327);

}


void MainWindow::on_btn_return_clicked()
{
    ui->gBox_telec->show();
    ui->gBox_recap->hide();

}


void MainWindow::on_btn_next_clicked()
{
    if(ui->lbl_telec_sys->isHidden() == false){
        ui->lbl_num_sys->setText(ui->line_edit_value->text());
        ui->lbl_telec_sys->hide();
        ui->lbl_telec_dia->setGeometry(80,65,40,25);
        ui->lbl_telec_dia->show();
        ui->line_edit_value->setText(ui->lbl_num_dia->text());
    }

   else if(ui->lbl_telec_dia->isHidden() == false){
        ui->lbl_num_dia->setText(ui->line_edit_value->text());
        ui->lbl_telec_dia->hide();
        ui->lbl_telec_pul->setGeometry(80,65,40,25);
        ui->lbl_telec_pul->show();
        ui->line_edit_value->setText(ui->lbl_num_pul->text());
    }
    else{
        ui->lbl_num_pul->setText(ui->line_edit_value->text());
        ui->lbl_telec_pul->hide();
        ui->lbl_telec_sys->setGeometry(80,65,40,25);
        ui->lbl_telec_sys->show();
        ui->line_edit_value->setText(ui->lbl_num_sys->text());
    }

}


void MainWindow::on_btn_back_clicked()
{
   if(ui->lbl_telec_dia->isHidden() == false){
        ui->lbl_num_dia->setText(ui->line_edit_value->text());
        ui->lbl_telec_dia->hide();
        ui->lbl_telec_sys->setGeometry(80,65,40,25);
        ui->lbl_telec_sys->show();
        ui->line_edit_value->setText(ui->lbl_num_sys->text());

    }
     else if(ui->lbl_telec_pul->isHidden() == false){
        ui->lbl_num_pul->setText(ui->line_edit_value->text());
        ui->lbl_telec_pul->hide();
        ui->lbl_telec_dia->setGeometry(80,65,40,25);
        ui->lbl_telec_dia->show();
        ui->line_edit_value->setText(ui->lbl_num_dia->text());

    }
   else {
       ui->lbl_num_sys->setText(ui->line_edit_value->text());
       ui->lbl_telec_sys->hide();
       ui->lbl_telec_pul->setGeometry(80,65,40,25);
       ui->lbl_telec_pul->show();
       ui->line_edit_value->setText(ui->lbl_num_pul->text());

   }
}


void MainWindow::on_btn_send_clicked()
{
    ui->gBox_recap->hide();
    ui->gBox_send->show();
    ui->gBox_send->setGeometry(0,0,196,327);

    int sys = ui->lbl_num_sys->text().toInt();
    int dia = ui->lbl_num_dia->text().toInt();
    int pul = ui->lbl_num_pul->text().toInt();

    if((sys != 0) && (dia != 0) && (pul != 0)){
    QString trame;
    const char * trame_char = "";

    trame = "SYS" + ui->lbl_num_sys->text() + ":" + "DIA" + ui->lbl_num_dia->text() + ":" + "PUL" + ui->lbl_num_pul->text();
    std::string trame_string = trame.toStdString();
    trame_char = trame_string.c_str();

    //ClientTCP client("10.187.52.36", 12345);

    if(Client.Connexion_server() == false){
        ui->lbl_answer_server->setText("Erreur connexion serveur...");
        ui->lbl_counter->hide();
        ui->btn_error->hide();
    }
    else if(Client.envoie_trame(trame_char) == false){
        ui->lbl_answer_server->setText("Succes connexion serveur !");
         ui->lbl_answer_trame->setText("Erreur envoie trame...");
    }
    else{
        ui->lbl_answer_server->setText("Succes connexion serveur !");
         ui->lbl_answer_trame->setText("Succes envoie trame !");
        }
    }
    else{
        ui->lbl_answer_trame->setText("Toutes les valeurs doivent \nêtre différentes de 0");
        ui->lbl_answer_server->hide();
        ui->lbl_counter->hide();
        ui->btn_error->hide();
    }
}


void MainWindow::on_btn_tool_clicked()
{
    ui->gBox_telec->hide();
    ui->gBox_settings->show();
    ui->gBox_settings->setGeometry(0,0,196,327);
}


void MainWindow::on_btn_confirm_clicked()
{
    ui->gBox_telec->show();
    ui->gBox_settings->hide();
}


void MainWindow::on_btn_cancel_clicked()
{
    ui->gBox_telec->show();
    ui->gBox_settings->hide();
}


void MainWindow::on_btn_error_clicked()
{
    int compteur = ui->lbl_counter->text().toInt();
    compteur++;

    ui->lbl_counter->setText(QString::number(compteur));

       QString trame;

      // ClientTCP client("10.187.52.36", 12345);
       trame = "E";
        const char * trame_char = "";
        std::string trame_string = trame.toStdString();
        trame_char = trame_string.c_str();

       if(Client.envoie_trame(trame_char) == false)
                ui->lbl_answer_trame->setText("Erreur envoie E (error)...");
           else
                ui->lbl_answer_trame->setText("Succes envoie E (error) !");
}




void MainWindow::on_btn_start_clicked()
{

    ui->btn_start->hide();
    ui->lbl_waiting->show();
    ui->gBox_waiting->hide();
    ui->gBox_telec->show();

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
    ui->gBox_telec->show();
    ui->gBox_send->hide();

}

