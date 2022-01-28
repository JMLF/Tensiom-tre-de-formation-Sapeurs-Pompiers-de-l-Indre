/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gBox_telecommande;
    QPushButton *btn_close;
    QPushButton *btn_supp;
    QPushButton *btn_8;
    QPushButton *btn_4;
    QPushButton *btn_1;
    QPushButton *btn_0;
    QPushButton *btn_5;
    QPushButton *btn_3;
    QPushButton *btn_2;
    QPushButton *btn_7;
    QPushButton *btn_6;
    QPushButton *btn_9;
    QLineEdit *line_resul;
    QLabel *lbl_sys_telecommande;
    QLabel *lbl_dia_telecommande;
    QLabel *lbl_pul_telecommande;
    QPushButton *btn_next;
    QGroupBox *gBox_recap;
    QPushButton *btn_close_2;
    QLabel *lbl_sys;
    QLabel *lbl_dia;
    QLabel *lbl_pul;
    QPushButton *btn_back;
    QPushButton *btn_send;
    QLabel *label_sys;
    QLabel *label_dia;
    QLabel *label_pul;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gBox_telecommande = new QGroupBox(centralwidget);
        gBox_telecommande->setObjectName(QString::fromUtf8("gBox_telecommande"));
        gBox_telecommande->setGeometry(QRect(0, 0, 196, 327));
        btn_close = new QPushButton(gBox_telecommande);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(10, 20, 21, 21));
        btn_supp = new QPushButton(gBox_telecommande);
        btn_supp->setObjectName(QString::fromUtf8("btn_supp"));
        btn_supp->setGeometry(QRect(100, 250, 41, 41));
        btn_8 = new QPushButton(gBox_telecommande);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(0, 250, 41, 41));
        btn_4 = new QPushButton(gBox_telecommande);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(0, 200, 41, 41));
        btn_1 = new QPushButton(gBox_telecommande);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(50, 150, 41, 41));
        btn_0 = new QPushButton(gBox_telecommande);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(0, 150, 41, 41));
        btn_5 = new QPushButton(gBox_telecommande);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(50, 200, 41, 41));
        btn_3 = new QPushButton(gBox_telecommande);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(150, 150, 41, 41));
        btn_2 = new QPushButton(gBox_telecommande);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(100, 150, 41, 41));
        btn_7 = new QPushButton(gBox_telecommande);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(150, 200, 41, 41));
        btn_6 = new QPushButton(gBox_telecommande);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(100, 200, 41, 41));
        btn_9 = new QPushButton(gBox_telecommande);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(50, 250, 41, 41));
        line_resul = new QLineEdit(gBox_telecommande);
        line_resul->setObjectName(QString::fromUtf8("line_resul"));
        line_resul->setGeometry(QRect(20, 110, 150, 26));
        QFont font;
        font.setPointSize(11);
        line_resul->setFont(font);
        lbl_sys_telecommande = new QLabel(gBox_telecommande);
        lbl_sys_telecommande->setObjectName(QString::fromUtf8("lbl_sys_telecommande"));
        lbl_sys_telecommande->setGeometry(QRect(10, 70, 41, 21));
        QFont font1;
        font1.setPointSize(18);
        lbl_sys_telecommande->setFont(font1);
        lbl_dia_telecommande = new QLabel(gBox_telecommande);
        lbl_dia_telecommande->setObjectName(QString::fromUtf8("lbl_dia_telecommande"));
        lbl_dia_telecommande->setGeometry(QRect(70, 70, 51, 21));
        lbl_dia_telecommande->setFont(font1);
        lbl_pul_telecommande = new QLabel(gBox_telecommande);
        lbl_pul_telecommande->setObjectName(QString::fromUtf8("lbl_pul_telecommande"));
        lbl_pul_telecommande->setGeometry(QRect(140, 60, 41, 41));
        lbl_pul_telecommande->setFont(font1);
        btn_next = new QPushButton(gBox_telecommande);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setGeometry(QRect(150, 250, 41, 41));
        btn_next->setFont(font);
        gBox_recap = new QGroupBox(centralwidget);
        gBox_recap->setObjectName(QString::fromUtf8("gBox_recap"));
        gBox_recap->setGeometry(QRect(210, 0, 196, 327));
        btn_close_2 = new QPushButton(gBox_recap);
        btn_close_2->setObjectName(QString::fromUtf8("btn_close_2"));
        btn_close_2->setGeometry(QRect(10, 20, 21, 21));
        lbl_sys = new QLabel(gBox_recap);
        lbl_sys->setObjectName(QString::fromUtf8("lbl_sys"));
        lbl_sys->setGeometry(QRect(40, 60, 81, 31));
        lbl_sys->setFont(font);
        lbl_dia = new QLabel(gBox_recap);
        lbl_dia->setObjectName(QString::fromUtf8("lbl_dia"));
        lbl_dia->setGeometry(QRect(40, 100, 81, 31));
        lbl_dia->setFont(font);
        lbl_pul = new QLabel(gBox_recap);
        lbl_pul->setObjectName(QString::fromUtf8("lbl_pul"));
        lbl_pul->setGeometry(QRect(40, 150, 81, 31));
        lbl_pul->setFont(font);
        btn_back = new QPushButton(gBox_recap);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(50, 200, 81, 31));
        btn_back->setFont(font);
        btn_send = new QPushButton(gBox_recap);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setGeometry(QRect(50, 250, 81, 31));
        btn_send->setFont(font);
        label_sys = new QLabel(gBox_recap);
        label_sys->setObjectName(QString::fromUtf8("label_sys"));
        label_sys->setGeometry(QRect(130, 70, 49, 16));
        label_sys->setFont(font);
        label_dia = new QLabel(gBox_recap);
        label_dia->setObjectName(QString::fromUtf8("label_dia"));
        label_dia->setGeometry(QRect(130, 110, 49, 16));
        label_dia->setFont(font);
        label_pul = new QLabel(gBox_recap);
        label_pul->setObjectName(QString::fromUtf8("label_pul"));
        label_pul->setGeometry(QRect(130, 160, 49, 16));
        label_pul->setFont(font);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btn_close, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(btn_close_2, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gBox_telecommande->setTitle(QCoreApplication::translate("MainWindow", "Telecommande", nullptr));
        btn_close->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_supp->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        lbl_sys_telecommande->setText(QCoreApplication::translate("MainWindow", "SYS", nullptr));
        lbl_dia_telecommande->setText(QCoreApplication::translate("MainWindow", "DIA", nullptr));
        lbl_pul_telecommande->setText(QCoreApplication::translate("MainWindow", "PUL", nullptr));
        btn_next->setText(QCoreApplication::translate("MainWindow", "next", nullptr));
        gBox_recap->setTitle(QCoreApplication::translate("MainWindow", "R\303\251capitulatif", nullptr));
        btn_close_2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        lbl_sys->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lbl_dia->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lbl_pul->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_back->setText(QCoreApplication::translate("MainWindow", "Retour", nullptr));
        btn_send->setText(QCoreApplication::translate("MainWindow", "Envoyer", nullptr));
        label_sys->setText(QCoreApplication::translate("MainWindow", "SYS", nullptr));
        label_dia->setText(QCoreApplication::translate("MainWindow", "DIA", nullptr));
        label_pul->setText(QCoreApplication::translate("MainWindow", "PUL", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
