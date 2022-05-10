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
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *gBox_telec;
    QPushButton *btn_ok;
    QToolButton *btn_tool;
    QLineEdit *line_edit_value;
    QPushButton *btn_back;
    QPushButton *btn_next;
    QLabel *lbl_telec_pul;
    QLabel *lbl_telec_dia;
    QLabel *lbl_telec_sys;
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
    QLabel *lbl_pul2;
    QGroupBox *gBox_send;
    QLabel *lbl_answer_trame;
    QPushButton *btn_return_2;
    QPushButton *btn_restart;
    QPushButton *btn_error;
    QLabel *lbl_counter;
    QLabel *lbl_answer_server;
    QGroupBox *gBox_settings;
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;
    QLabel *lbl_new_pin;
    QLineEdit *line_edit_pin;
    QGroupBox *gBox_waiting;
    QLabel *lbl_waiting;
    QProgressBar *progressBar_waiting;
    QGroupBox *gBox_security;
    QPushButton *btn_confirm_security;
    QLabel *lbl_pin_security;
    QLineEdit *line_edit_pin_security;
    QLabel *label;
    QGroupBox *gBox_keyboard;
    QPushButton *btn_3;
    QPushButton *btn_7;
    QPushButton *btn_8;
    QPushButton *btn_6;
    QPushButton *btn_9;
    QPushButton *btn_4;
    QPushButton *btn_1;
    QPushButton *btn_5;
    QPushButton *btn_2;
    QPushButton *btn_delete;
    QPushButton *btn_0;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(2959, 2023);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gBox_telec = new QGroupBox(centralwidget);
        gBox_telec->setObjectName(QString::fromUtf8("gBox_telec"));
        gBox_telec->setGeometry(QRect(0, 0, 480, 800));
        gBox_telec->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        btn_ok = new QPushButton(gBox_telec);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(360, 250, 100, 100));
        QFont font;
        font.setPointSize(28);
        btn_ok->setFont(font);
        btn_ok->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btn_tool = new QToolButton(gBox_telec);
        btn_tool->setObjectName(QString::fromUtf8("btn_tool"));
        btn_tool->setGeometry(QRect(380, 20, 80, 80));
        btn_tool->setFont(font);
        btn_tool->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        line_edit_value = new QLineEdit(gBox_telec);
        line_edit_value->setObjectName(QString::fromUtf8("line_edit_value"));
        line_edit_value->setGeometry(QRect(200, 260, 100, 81));
        QFont font1;
        font1.setPointSize(36);
        line_edit_value->setFont(font1);
        line_edit_value->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_back = new QPushButton(gBox_telec);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(90, 160, 80, 80));
        btn_back->setFont(font);
        btn_back->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_next = new QPushButton(gBox_telec);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setGeometry(QRect(320, 160, 80, 80));
        btn_next->setFont(font);
        btn_next->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        lbl_telec_pul = new QLabel(gBox_telec);
        lbl_telec_pul->setObjectName(QString::fromUtf8("lbl_telec_pul"));
        lbl_telec_pul->setGeometry(QRect(200, 140, 100, 100));
        QFont font2;
        font2.setPointSize(40);
        lbl_telec_pul->setFont(font2);
        lbl_telec_pul->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_telec_dia = new QLabel(gBox_telec);
        lbl_telec_dia->setObjectName(QString::fromUtf8("lbl_telec_dia"));
        lbl_telec_dia->setGeometry(QRect(200, 70, 100, 100));
        lbl_telec_dia->setFont(font2);
        lbl_telec_dia->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_telec_sys = new QLabel(gBox_telec);
        lbl_telec_sys->setObjectName(QString::fromUtf8("lbl_telec_sys"));
        lbl_telec_sys->setGeometry(QRect(200, 10, 100, 100));
        lbl_telec_sys->setFont(font2);
        lbl_telec_sys->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        gBox_recap = new QGroupBox(centralwidget);
        gBox_recap->setObjectName(QString::fromUtf8("gBox_recap"));
        gBox_recap->setGeometry(QRect(490, 0, 480, 800));
        gBox_recap->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        lbl_num_sys = new QLabel(gBox_recap);
        lbl_num_sys->setObjectName(QString::fromUtf8("lbl_num_sys"));
        lbl_num_sys->setGeometry(QRect(60, 100, 120, 120));
        lbl_num_sys->setFont(font1);
        lbl_num_sys->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        lbl_num_dia = new QLabel(gBox_recap);
        lbl_num_dia->setObjectName(QString::fromUtf8("lbl_num_dia"));
        lbl_num_dia->setGeometry(QRect(60, 270, 100, 100));
        lbl_num_dia->setFont(font1);
        lbl_num_dia->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        lbl_num_pul = new QLabel(gBox_recap);
        lbl_num_pul->setObjectName(QString::fromUtf8("lbl_num_pul"));
        lbl_num_pul->setGeometry(QRect(60, 440, 100, 100));
        lbl_num_pul->setFont(font1);
        lbl_num_pul->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        lbl_sys = new QLabel(gBox_recap);
        lbl_sys->setObjectName(QString::fromUtf8("lbl_sys"));
        lbl_sys->setGeometry(QRect(210, 100, 120, 120));
        lbl_sys->setFont(font2);
        lbl_sys->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_dia = new QLabel(gBox_recap);
        lbl_dia->setObjectName(QString::fromUtf8("lbl_dia"));
        lbl_dia->setGeometry(QRect(210, 270, 120, 120));
        lbl_dia->setFont(font2);
        lbl_dia->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_pul = new QLabel(gBox_recap);
        lbl_pul->setObjectName(QString::fromUtf8("lbl_pul"));
        lbl_pul->setGeometry(QRect(210, 440, 120, 120));
        lbl_pul->setFont(font2);
        lbl_pul->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_mmhg = new QLabel(gBox_recap);
        lbl_mmhg->setObjectName(QString::fromUtf8("lbl_mmhg"));
        lbl_mmhg->setGeometry(QRect(310, 160, 80, 40));
        QFont font3;
        font3.setPointSize(18);
        lbl_mmhg->setFont(font3);
        lbl_mmhg->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_mmhg2 = new QLabel(gBox_recap);
        lbl_mmhg2->setObjectName(QString::fromUtf8("lbl_mmhg2"));
        lbl_mmhg2->setGeometry(QRect(310, 320, 80, 40));
        lbl_mmhg2->setFont(font3);
        lbl_mmhg2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_return = new QPushButton(gBox_recap);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(170, 560, 150, 90));
        QFont font4;
        font4.setPointSize(12);
        btn_return->setFont(font4);
        btn_return->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btn_send = new QPushButton(gBox_recap);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setGeometry(QRect(170, 680, 150, 90));
        btn_send->setFont(font4);
        btn_send->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        lbl_pul2 = new QLabel(gBox_recap);
        lbl_pul2->setObjectName(QString::fromUtf8("lbl_pul2"));
        lbl_pul2->setGeometry(QRect(310, 490, 100, 40));
        lbl_pul2->setFont(font3);
        lbl_pul2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        gBox_send = new QGroupBox(centralwidget);
        gBox_send->setObjectName(QString::fromUtf8("gBox_send"));
        gBox_send->setGeometry(QRect(980, 0, 480, 800));
        gBox_send->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        lbl_answer_trame = new QLabel(gBox_send);
        lbl_answer_trame->setObjectName(QString::fromUtf8("lbl_answer_trame"));
        lbl_answer_trame->setGeometry(QRect(10, 310, 461, 81));
        QFont font5;
        font5.setPointSize(20);
        lbl_answer_trame->setFont(font5);
        lbl_answer_trame->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        btn_return_2 = new QPushButton(gBox_send);
        btn_return_2->setObjectName(QString::fromUtf8("btn_return_2"));
        btn_return_2->setGeometry(QRect(180, 590, 130, 70));
        btn_return_2->setFont(font4);
        btn_return_2->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btn_restart = new QPushButton(gBox_send);
        btn_restart->setObjectName(QString::fromUtf8("btn_restart"));
        btn_restart->setGeometry(QRect(180, 680, 130, 70));
        btn_restart->setFont(font4);
        btn_restart->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btn_error = new QPushButton(gBox_send);
        btn_error->setObjectName(QString::fromUtf8("btn_error"));
        btn_error->setGeometry(QRect(180, 500, 130, 70));
        btn_error->setFont(font4);
        btn_error->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        lbl_counter = new QLabel(gBox_send);
        lbl_counter->setObjectName(QString::fromUtf8("lbl_counter"));
        lbl_counter->setGeometry(QRect(60, 485, 100, 100));
        lbl_counter->setFont(font1);
        lbl_counter->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        lbl_answer_server = new QLabel(gBox_send);
        lbl_answer_server->setObjectName(QString::fromUtf8("lbl_answer_server"));
        lbl_answer_server->setGeometry(QRect(10, 150, 461, 81));
        lbl_answer_server->setFont(font5);
        lbl_answer_server->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        gBox_settings = new QGroupBox(centralwidget);
        gBox_settings->setObjectName(QString::fromUtf8("gBox_settings"));
        gBox_settings->setGeometry(QRect(1470, 20, 480, 800));
        gBox_settings->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        btn_confirm = new QPushButton(gBox_settings);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setGeometry(QRect(280, 230, 150, 90));
        QFont font6;
        font6.setPointSize(14);
        btn_confirm->setFont(font6);
        btn_confirm->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btn_cancel = new QPushButton(gBox_settings);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(50, 230, 150, 90));
        btn_cancel->setFont(font6);
        btn_cancel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        lbl_new_pin = new QLabel(gBox_settings);
        lbl_new_pin->setObjectName(QString::fromUtf8("lbl_new_pin"));
        lbl_new_pin->setGeometry(QRect(130, 70, 241, 31));
        lbl_new_pin->setFont(font5);
        lbl_new_pin->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        line_edit_pin = new QLineEdit(gBox_settings);
        line_edit_pin->setObjectName(QString::fromUtf8("line_edit_pin"));
        line_edit_pin->setGeometry(QRect(190, 140, 91, 51));
        line_edit_pin->setFont(font1);
        line_edit_pin->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        gBox_waiting = new QGroupBox(centralwidget);
        gBox_waiting->setObjectName(QString::fromUtf8("gBox_waiting"));
        gBox_waiting->setGeometry(QRect(490, 810, 480, 800));
        gBox_waiting->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        lbl_waiting = new QLabel(gBox_waiting);
        lbl_waiting->setObjectName(QString::fromUtf8("lbl_waiting"));
        lbl_waiting->setGeometry(QRect(130, 370, 221, 41));
        lbl_waiting->setFont(font6);
        lbl_waiting->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        progressBar_waiting = new QProgressBar(gBox_waiting);
        progressBar_waiting->setObjectName(QString::fromUtf8("progressBar_waiting"));
        progressBar_waiting->setGeometry(QRect(80, 330, 291, 41));
        progressBar_waiting->setValue(24);
        progressBar_waiting->setTextVisible(false);
        gBox_security = new QGroupBox(centralwidget);
        gBox_security->setObjectName(QString::fromUtf8("gBox_security"));
        gBox_security->setGeometry(QRect(0, 810, 480, 800));
        gBox_security->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        btn_confirm_security = new QPushButton(gBox_security);
        btn_confirm_security->setObjectName(QString::fromUtf8("btn_confirm_security"));
        btn_confirm_security->setGeometry(QRect(160, 250, 150, 90));
        btn_confirm_security->setFont(font6);
        btn_confirm_security->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        lbl_pin_security = new QLabel(gBox_security);
        lbl_pin_security->setObjectName(QString::fromUtf8("lbl_pin_security"));
        lbl_pin_security->setGeometry(QRect(150, 160, 190, 80));
        lbl_pin_security->setFont(font5);
        lbl_pin_security->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0,angle:0 ,stop:0 rgba(0, 0, 0, 0));"));
        line_edit_pin_security = new QLineEdit(gBox_security);
        line_edit_pin_security->setObjectName(QString::fromUtf8("line_edit_pin_security"));
        line_edit_pin_security->setGeometry(QRect(170, 100, 131, 61));
        QFont font7;
        font7.setPointSize(48);
        line_edit_pin_security->setFont(font7);
        line_edit_pin_security->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(gBox_security);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(200, 30, 81, 51));
        label->setFont(font1);
        gBox_keyboard = new QGroupBox(centralwidget);
        gBox_keyboard->setObjectName(QString::fromUtf8("gBox_keyboard"));
        gBox_keyboard->setGeometry(QRect(1960, 380, 480, 420));
        gBox_keyboard->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 245, 245);"));
        btn_3 = new QPushButton(gBox_keyboard);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(370, 20, 100, 100));
        btn_3->setFont(font);
        btn_3->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_7 = new QPushButton(gBox_keyboard);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(370, 160, 100, 100));
        btn_7->setFont(font);
        btn_7->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_8 = new QPushButton(gBox_keyboard);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(10, 300, 100, 100));
        btn_8->setFont(font);
        btn_8->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_6 = new QPushButton(gBox_keyboard);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(250, 160, 100, 100));
        btn_6->setFont(font);
        btn_6->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_9 = new QPushButton(gBox_keyboard);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(130, 300, 100, 100));
        btn_9->setFont(font);
        btn_9->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_4 = new QPushButton(gBox_keyboard);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(10, 160, 100, 100));
        btn_4->setFont(font);
        btn_4->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_1 = new QPushButton(gBox_keyboard);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(130, 20, 100, 100));
        btn_1->setFont(font);
        btn_1->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_5 = new QPushButton(gBox_keyboard);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(130, 160, 100, 100));
        btn_5->setFont(font);
        btn_5->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_2 = new QPushButton(gBox_keyboard);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(250, 20, 100, 100));
        btn_2->setFont(font);
        btn_2->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        btn_delete = new QPushButton(gBox_keyboard);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setGeometry(QRect(250, 300, 100, 100));
        btn_delete->setFont(font);
        btn_delete->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);"));
        btn_0 = new QPushButton(gBox_keyboard);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(10, 20, 100, 100));
        btn_0->setFont(font);
        btn_0->setStyleSheet(QString::fromUtf8("background-color: rgb(234, 234, 234);"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 2959, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        gBox_telec->setTitle(QCoreApplication::translate("MainWindow", "T\303\251l\303\251commande", nullptr));
        btn_ok->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        btn_tool->setText(QCoreApplication::translate("MainWindow", "\360\237\233\240\357\270\217", nullptr));
#if QT_CONFIG(tooltip)
        line_edit_value->setToolTip(QCoreApplication::translate("MainWindow", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        btn_back->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        btn_next->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        lbl_telec_pul->setText(QCoreApplication::translate("MainWindow", "PUL", nullptr));
        lbl_telec_dia->setText(QCoreApplication::translate("MainWindow", "DIA", nullptr));
        lbl_telec_sys->setText(QCoreApplication::translate("MainWindow", "SYS", nullptr));
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
        lbl_pul2->setText(QCoreApplication::translate("MainWindow", "bat/min", nullptr));
        gBox_send->setTitle(QCoreApplication::translate("MainWindow", "Envoie", nullptr));
        lbl_answer_trame->setText(QCoreApplication::translate("MainWindow", "R\303\251ponse trame", nullptr));
        btn_return_2->setText(QCoreApplication::translate("MainWindow", "RETOUR", nullptr));
        btn_restart->setText(QCoreApplication::translate("MainWindow", "RECOMMENCER", nullptr));
        btn_error->setText(QCoreApplication::translate("MainWindow", "ERREUR", nullptr));
        lbl_counter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lbl_answer_server->setText(QCoreApplication::translate("MainWindow", "R\303\251ponse serveur", nullptr));
        gBox_settings->setTitle(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        btn_confirm->setText(QCoreApplication::translate("MainWindow", "VALIDER", nullptr));
        btn_cancel->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        lbl_new_pin->setText(QCoreApplication::translate("MainWindow", "Nouveau code PIN", nullptr));
        gBox_waiting->setTitle(QCoreApplication::translate("MainWindow", "Attente", nullptr));
        lbl_waiting->setText(QCoreApplication::translate("MainWindow", "Attente d'un tensiom\303\250tre", nullptr));
        gBox_security->setTitle(QCoreApplication::translate("MainWindow", "S\303\251curit\303\251", nullptr));
        btn_confirm_security->setText(QCoreApplication::translate("MainWindow", "VALIDER", nullptr));
        lbl_pin_security->setText(QCoreApplication::translate("MainWindow", "ERR : code PIN", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "PIN ", nullptr));
        gBox_keyboard->setTitle(QCoreApplication::translate("MainWindow", "Clavier", nullptr));
        btn_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn_delete->setText(QCoreApplication::translate("MainWindow", "\342\214\253", nullptr));
        btn_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
