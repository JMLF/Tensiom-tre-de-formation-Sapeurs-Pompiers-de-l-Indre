#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->gBox_telecommande->show();
    ui->gBox_recap->hide();
    ui->lbl_dia_telecommande->hide();
    ui->lbl_pul_telecommande->hide();
    ui->line_resul->setMaxLength(3);

     ui->lbl_sys_telecommande->setGeometry(70,70,51,21);
      ui->lbl_dia_telecommande->setGeometry(70,70,51,21);
       ui->lbl_pul_telecommande->setGeometry(70,70,51,21);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btn_0_clicked()
{
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_0->text());
}


void MainWindow::on_btn_1_clicked()
{
       if(ui->line_resul->text() == "0"){
        ui->line_resul->setText("");
        ui->line_resul->setText(ui->line_resul->text() + ui->btn_1->text());
       }
           else
            ui->line_resul->setText(ui->line_resul->text() + ui->btn_1->text());


}


void MainWindow::on_btn_2_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_2->text());
    }
    else
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_2->text());
}


void MainWindow::on_btn_3_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_3->text());
    }
    else
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_3->text());
}


void MainWindow::on_btn_4_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_4->text());
    }
    else
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_4->text());
}


void MainWindow::on_btn_5_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_5->text());
    }
    else
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_5->text());
}


void MainWindow::on_btn_6_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_6->text());
    }
    else
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_6->text());
}



void MainWindow::on_btn_7_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_7->text());
    }
    else
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_7->text());
}


void MainWindow::on_btn_8_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_8->text());
    }
    else
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_8->text());
}


void MainWindow::on_btn_9_clicked()
{
    if(ui->line_resul->text() == "0"){
     ui->line_resul->setText("");
     ui->line_resul->setText(ui->line_resul->text() + ui->btn_9->text());
    }
    else
    ui->line_resul->setText(ui->line_resul->text() + ui->btn_9->text());
}



void MainWindow::on_btn_supp_clicked()
{
    QString texte = ui->line_resul->text();
    unsigned int taille = texte.size();

    if(taille > 0)
      ui->line_resul->setText(texte.remove(taille - 1 , 1));
}


void MainWindow::on_btn_back_clicked()
{
    ui->gBox_telecommande->show();
    ui->gBox_recap->hide();

}

void MainWindow::on_btn_next_clicked()
{
    unsigned char etat = 0;

    if( ui->lbl_sys_telecommande->isVisible() == true)
        etat = 1;
    if( ui->lbl_dia_telecommande->isVisible() == true)
        etat = 2;
    if( ui->lbl_pul_telecommande->isVisible() == true)
        etat = 3;

        switch(etat){
          case 1:
            ui->lbl_sys->setText(ui->line_resul->text());
            ui->lbl_sys_telecommande->hide();
            ui->lbl_dia_telecommande->show();
            ui->line_resul->setText(ui->lbl_dia->text());
            break;

        case 2:
            ui->lbl_dia->setText(ui->line_resul->text());
            ui->lbl_dia_telecommande->hide();
            ui->lbl_pul_telecommande->show();
            ui->line_resul->setText(ui->lbl_pul->text());
            break;

        case 3:
            ui->lbl_pul->setText(ui->line_resul->text());
             ui->lbl_pul_telecommande->hide();
            ui->lbl_sys_telecommande->show();
            ui->line_resul->setText(ui->lbl_sys->text());
            ui->gBox_telecommande->hide();
            ui->gBox_recap->show();
            break;

}

}


