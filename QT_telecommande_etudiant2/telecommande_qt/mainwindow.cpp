#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "client_TCP.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->line_edit_value->setMaxLength(3);
    ui->gBox_recap->hide();
    ui->gBox_send->hide();

     ui->lbl_telec_sys->setGeometry(80,65,40,25);
    ui->lbl_telec_dia->hide();
     ui->lbl_telec_pul->hide();

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
    if(ui->lbl_telec_sys->isHidden() == false)
            ui->lbl_num_sys->setText(ui->line_edit_value->text());
    else if(ui->lbl_telec_dia->isHidden() == false)
        ui->lbl_num_dia->setText(ui->line_edit_value->text());
    else
        ui->lbl_num_pul->setText(ui->line_edit_value->text());

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
     else if(ui->lbl_telec_pul->isHidden() == false){
        ui->lbl_num_pul->setText(ui->line_edit_value->text());
        ui->lbl_telec_pul->hide();
        ui->lbl_telec_sys->setGeometry(80,65,40,25);
        ui->lbl_telec_sys->show();
        ui->line_edit_value->setText(ui->lbl_num_sys->text());
    }
}


void MainWindow::on_btn_back_clicked()
{
    if(ui->lbl_telec_sys->isHidden() == false){
        ui->lbl_num_sys->setText(ui->line_edit_value->text());
        ui->lbl_telec_sys->hide();
        ui->lbl_telec_pul->setGeometry(80,65,40,25);
        ui->lbl_telec_pul->show();
        ui->line_edit_value->setText(ui->lbl_num_pul->text());
    }

   else if(ui->lbl_telec_dia->isHidden() == false){
        ui->lbl_num_dia->setText(ui->line_edit_value->text());
        ui->lbl_telec_dia->hide();
        ui->lbl_telec_sys->setGeometry(80,65,40,25);
        ui->lbl_telec_sys->show();
        ui->line_edit_value->setText(ui->lbl_num_sys->text());
    }
     else {
        ui->lbl_num_pul->setText(ui->line_edit_value->text());
        ui->lbl_telec_pul->hide();
        ui->lbl_telec_dia->setGeometry(80,65,40,25);
        ui->lbl_telec_dia->show();
        ui->line_edit_value->setText(ui->lbl_num_dia->text());
    }
}


void MainWindow::on_btn_send_clicked()
{
    ui->gBox_recap->hide();
    ui->gBox_send->show();
    ui->gBox_send->setGeometry(0,0,196,327);
}

