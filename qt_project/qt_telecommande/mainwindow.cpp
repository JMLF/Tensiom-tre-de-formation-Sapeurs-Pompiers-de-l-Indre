#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gBox_telecommande->show();
    ui->gBox_recap->hide();
    ui->radio_btn_dia->setDisabled(true);
    ui->radio_btn_pul->setDisabled(true);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_ok_clicked()
{
    ui->gBox_telecommande->hide();
    ui->gBox_recap->show();
    ui->gBox_recap->setGeometry(0,0,196,327);
}


void MainWindow::on_btn_0_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_0->text());
}


void MainWindow::on_btn_1_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_1->text());
}


void MainWindow::on_btn_2_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_2->text());
}


void MainWindow::on_btn_3_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_3->text());
}


void MainWindow::on_btn_4_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_4->text());
}


void MainWindow::on_btn_5_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_5->text());
}


void MainWindow::on_btn_6_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_6->text());
}



void MainWindow::on_btn_7_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_7->text());
}


void MainWindow::on_btn_8_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_8->text());
}


void MainWindow::on_btn_9_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_9->text());
}


void MainWindow::on_btn_transmettre_clicked()
{
    int btn_radio = 0;

    if(ui->radio_btn_sys->isChecked() == true)
        btn_radio = 1;
    else if (ui->radio_btn_dia->isChecked() == true)
        btn_radio = 2;
    else
        btn_radio = 3;

    switch (btn_radio) {
    case 1 :
        ui->lbl_sys->setText(ui->line_resul->text());
         ui->line_resul->setText("");
          ui->radio_btn_dia->setChecked(true);
          ui->radio_btn_dia->setDisabled(false);
          ui->radio_btn_sys->setDisabled(true);
        break;
    case 2 :
        ui->lbl_dia->setText(ui->line_resul->text());
        ui->line_resul->setText("");
        ui->radio_btn_pul->setChecked(true);
        ui->radio_btn_pul->setDisabled(false);
        ui->radio_btn_dia->setDisabled(true);
        break;
    case 3 :
         ui->lbl_pul->setText(ui->line_resul->text());
          ui->line_resul->setText("");
           ui->radio_btn_sys->setChecked(true);
           ui->radio_btn_sys->setDisabled(true);
            ui->radio_btn_dia->setDisabled(true);
            ui->btn_ok->click();
        break;
    }

}


void MainWindow::on_btn_supp_clicked()
{
    ui->line_resul->setText("");
}


void MainWindow::on_btn_back_clicked()
{
    ui->gBox_telecommande->show();
    ui->gBox_recap->hide();

    ui->radio_btn_sys->setDisabled(false);
     ui->radio_btn_sys->setChecked(true);
     ui->radio_btn_dia->setDisabled(true);
      ui->radio_btn_pul->setDisabled(true);




}

