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
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gBox_telec;
    QPushButton *btn_close;
    QPushButton *btn_3;
    QPushButton *btn_0;
    QPushButton *btn_1;
    QPushButton *btn_2;
    QPushButton *btn_7;
    QPushButton *btn_5;
    QPushButton *btn_6;
    QPushButton *btn_4;
    QPushButton *btn_9;
    QPushButton *btn_8;
    QPushButton *btn_ok;
    QPushButton *btn_delete;
    QToolButton *btn_tool;
    QRadioButton *r_btn_sys;
    QRadioButton *r_btn_pul;
    QRadioButton *r_btn_dia;
    QLineEdit *line_edit_value;
    QGroupBox *gBox_recap;
    QLabel *lbl_num_sys;
    QLabel *lbl_num_dia;
    QLabel *lbl_num_pul;
    QLabel *lbl_sys;
    QLabel *lbl_dia;
    QLabel *lbl_pul;
    QLabel *lbl_mmhg;
    QLabel *lbl_mmhg2;
    QPushButton *btn_return;
    QPushButton *btn_send;
    QGroupBox *gBox_send;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1318, 626);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gBox_telec = new QGroupBox(centralwidget);
        gBox_telec->setObjectName(QString::fromUtf8("gBox_telec"));
        gBox_telec->setGeometry(QRect(0, 0, 196, 327));
        btn_close = new QPushButton(gBox_telec);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(10, 20, 31, 31));
        btn_3 = new QPushButton(gBox_telec);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(150, 170, 41, 41));
        btn_0 = new QPushButton(gBox_telec);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(0, 170, 41, 41));
        btn_1 = new QPushButton(gBox_telec);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(50, 170, 41, 41));
        btn_2 = new QPushButton(gBox_telec);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(100, 170, 41, 41));
        btn_7 = new QPushButton(gBox_telec);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(150, 220, 41, 41));
        btn_5 = new QPushButton(gBox_telec);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(50, 220, 41, 41));
        btn_6 = new QPushButton(gBox_telec);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(100, 220, 41, 41));
        btn_4 = new QPushButton(gBox_telec);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(0, 220, 41, 41));
        btn_9 = new QPushButton(gBox_telec);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(50, 270, 41, 41));
        btn_8 = new QPushButton(gBox_telec);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(0, 270, 41, 41));
        btn_ok = new QPushButton(gBox_telec);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(150, 270, 41, 41));
        btn_delete = new QPushButton(gBox_telec);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setGeometry(QRect(100, 270, 41, 41));
        btn_tool = new QToolButton(gBox_telec);
        btn_tool->setObjectName(QString::fromUtf8("btn_tool"));
        btn_tool->setGeometry(QRect(150, 20, 31, 31));
        r_btn_sys = new QRadioButton(gBox_telec);
        r_btn_sys->setObjectName(QString::fromUtf8("r_btn_sys"));
        r_btn_sys->setGeometry(QRect(10, 70, 51, 20));
        QFont font;
        font.setPointSize(12);
        r_btn_sys->setFont(font);
        r_btn_sys->setChecked(true);
        r_btn_pul = new QRadioButton(gBox_telec);
        r_btn_pul->setObjectName(QString::fromUtf8("r_btn_pul"));
        r_btn_pul->setGeometry(QRect(130, 70, 51, 20));
        r_btn_pul->setFont(font);
        r_btn_dia = new QRadioButton(gBox_telec);
        r_btn_dia->setObjectName(QString::fromUtf8("r_btn_dia"));
        r_btn_dia->setGeometry(QRect(70, 70, 51, 20));
        r_btn_dia->setFont(font);
        line_edit_value = new QLineEdit(gBox_telec);
        line_edit_value->setObjectName(QString::fromUtf8("line_edit_value"));
        line_edit_value->setGeometry(QRect(30, 110, 131, 31));
        QFont font1;
        font1.setPointSize(16);
        line_edit_value->setFont(font1);
        gBox_recap = new QGroupBox(centralwidget);
        gBox_recap->setObjectName(QString::fromUtf8("gBox_recap"));
        gBox_recap->setGeometry(QRect(210, 0, 196, 327));
        lbl_num_sys = new QLabel(gBox_recap);
        lbl_num_sys->setObjectName(QString::fromUtf8("lbl_num_sys"));
        lbl_num_sys->setGeometry(QRect(20, 50, 49, 16));
        lbl_num_sys->setFont(font);
        lbl_num_dia = new QLabel(gBox_recap);
        lbl_num_dia->setObjectName(QString::fromUtf8("lbl_num_dia"));
        lbl_num_dia->setGeometry(QRect(20, 120, 49, 16));
        lbl_num_dia->setFont(font);
        lbl_num_pul = new QLabel(gBox_recap);
        lbl_num_pul->setObjectName(QString::fromUtf8("lbl_num_pul"));
        lbl_num_pul->setGeometry(QRect(20, 190, 49, 16));
        lbl_num_pul->setFont(font);
        lbl_sys = new QLabel(gBox_recap);
        lbl_sys->setObjectName(QString::fromUtf8("lbl_sys"));
        lbl_sys->setGeometry(QRect(90, 50, 41, 21));
        QFont font2;
        font2.setPointSize(14);
        lbl_sys->setFont(font2);
        lbl_dia = new QLabel(gBox_recap);
        lbl_dia->setObjectName(QString::fromUtf8("lbl_dia"));
        lbl_dia->setGeometry(QRect(90, 120, 41, 21));
        lbl_dia->setFont(font2);
        lbl_pul = new QLabel(gBox_recap);
        lbl_pul->setObjectName(QString::fromUtf8("lbl_pul"));
        lbl_pul->setGeometry(QRect(90, 190, 41, 21));
        lbl_pul->setFont(font2);
        lbl_mmhg = new QLabel(gBox_recap);
        lbl_mmhg->setObjectName(QString::fromUtf8("lbl_mmhg"));
        lbl_mmhg->setGeometry(QRect(125, 60, 49, 16));
        lbl_mmhg2 = new QLabel(gBox_recap);
        lbl_mmhg2->setObjectName(QString::fromUtf8("lbl_mmhg2"));
        lbl_mmhg2->setGeometry(QRect(125, 130, 49, 16));
        btn_return = new QPushButton(gBox_recap);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(50, 240, 75, 24));
        btn_send = new QPushButton(gBox_recap);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setGeometry(QRect(50, 280, 75, 24));
        gBox_send = new QGroupBox(centralwidget);
        gBox_send->setObjectName(QString::fromUtf8("gBox_send"));
        gBox_send->setGeometry(QRect(420, 0, 196, 327));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1318, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(btn_close, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gBox_telec->setTitle(QCoreApplication::translate("MainWindow", "T\303\251l\303\251commande", nullptr));
        btn_close->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_ok->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        btn_tool->setText(QCoreApplication::translate("MainWindow", "...", nullptr));
        r_btn_sys->setText(QCoreApplication::translate("MainWindow", "SYS", nullptr));
        r_btn_pul->setText(QCoreApplication::translate("MainWindow", "PUL", nullptr));
        r_btn_dia->setText(QCoreApplication::translate("MainWindow", "DIA", nullptr));
        gBox_recap->setTitle(QCoreApplication::translate("MainWindow", "R\303\251capitulatif", nullptr));
        lbl_num_sys->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lbl_num_dia->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lbl_num_pul->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lbl_sys->setText(QCoreApplication::translate("MainWindow", "SYS ", nullptr));
        lbl_dia->setText(QCoreApplication::translate("MainWindow", "DIA", nullptr));
        lbl_pul->setText(QCoreApplication::translate("MainWindow", "PUL", nullptr));
        lbl_mmhg->setText(QCoreApplication::translate("MainWindow", "mmHg", nullptr));
        lbl_mmhg2->setText(QCoreApplication::translate("MainWindow", "mmHg", nullptr));
        btn_return->setText(QCoreApplication::translate("MainWindow", "RETOUR", nullptr));
        btn_send->setText(QCoreApplication::translate("MainWindow", "ENVOYER", nullptr));
        gBox_send->setTitle(QCoreApplication::translate("MainWindow", "Envoie", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
