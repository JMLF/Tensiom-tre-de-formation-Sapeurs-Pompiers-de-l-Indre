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
    QPushButton *btn_close_2;
    QGroupBox *gBox_send;
    QPushButton *btn_close_3;
    QLabel *lbl_answer;
    QPushButton *btn_error;
    QGroupBox *gBox_settings;
    QLabel *label;
    QPushButton *btn_close_4;
    QPushButton *btn_confirm;
    QPushButton *btn_cancel;
    QGroupBox *gBox_waiting;
    QLabel *lbl_waiting;
    QLabel *lbl_chiffre;
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
        gBox_telec->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(101, 124, 255, 69), stop:0.388626 rgba(143, 149, 255, 69), stop:0.42654 rgba(112, 123, 255, 145), stop:0.454976 rgba(23, 81, 255, 208), stop:0.477581 rgba(149, 154, 255, 130), stop:0.516588 rgba(255, 224, 216, 130), stop:0.549763 rgba(255, 74, 45, 255), stop:0.57754 rgba(255, 155, 143, 130), stop:0.611374 rgba(255, 170, 164, 69), stop:1 rgba(255, 159, 159, 69));"));
        btn_close = new QPushButton(gBox_telec);
        btn_close->setObjectName(QString::fromUtf8("btn_close"));
        btn_close->setGeometry(QRect(10, 20, 31, 31));
        QFont font;
        font.setPointSize(12);
        btn_close->setFont(font);
        btn_close->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_3 = new QPushButton(gBox_telec);
        btn_3->setObjectName(QString::fromUtf8("btn_3"));
        btn_3->setGeometry(QRect(150, 170, 41, 41));
        btn_3->setFont(font);
        btn_3->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_0 = new QPushButton(gBox_telec);
        btn_0->setObjectName(QString::fromUtf8("btn_0"));
        btn_0->setGeometry(QRect(0, 170, 41, 41));
        btn_0->setFont(font);
        btn_0->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));\n"
""));
        btn_1 = new QPushButton(gBox_telec);
        btn_1->setObjectName(QString::fromUtf8("btn_1"));
        btn_1->setGeometry(QRect(50, 170, 41, 41));
        btn_1->setFont(font);
        btn_1->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_2 = new QPushButton(gBox_telec);
        btn_2->setObjectName(QString::fromUtf8("btn_2"));
        btn_2->setGeometry(QRect(100, 170, 41, 41));
        btn_2->setFont(font);
        btn_2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_7 = new QPushButton(gBox_telec);
        btn_7->setObjectName(QString::fromUtf8("btn_7"));
        btn_7->setGeometry(QRect(150, 220, 41, 41));
        btn_7->setFont(font);
        btn_7->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_5 = new QPushButton(gBox_telec);
        btn_5->setObjectName(QString::fromUtf8("btn_5"));
        btn_5->setGeometry(QRect(50, 220, 41, 41));
        btn_5->setFont(font);
        btn_5->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_6 = new QPushButton(gBox_telec);
        btn_6->setObjectName(QString::fromUtf8("btn_6"));
        btn_6->setGeometry(QRect(100, 220, 41, 41));
        btn_6->setFont(font);
        btn_6->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_4 = new QPushButton(gBox_telec);
        btn_4->setObjectName(QString::fromUtf8("btn_4"));
        btn_4->setGeometry(QRect(0, 220, 41, 41));
        btn_4->setFont(font);
        btn_4->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_9 = new QPushButton(gBox_telec);
        btn_9->setObjectName(QString::fromUtf8("btn_9"));
        btn_9->setGeometry(QRect(50, 270, 41, 41));
        btn_9->setFont(font);
        btn_9->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_8 = new QPushButton(gBox_telec);
        btn_8->setObjectName(QString::fromUtf8("btn_8"));
        btn_8->setGeometry(QRect(0, 270, 41, 41));
        btn_8->setFont(font);
        btn_8->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_ok = new QPushButton(gBox_telec);
        btn_ok->setObjectName(QString::fromUtf8("btn_ok"));
        btn_ok->setGeometry(QRect(135, 100, 31, 31));
        btn_ok->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_delete = new QPushButton(gBox_telec);
        btn_delete->setObjectName(QString::fromUtf8("btn_delete"));
        btn_delete->setGeometry(QRect(100, 270, 41, 41));
        btn_delete->setFont(font);
        btn_delete->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_tool = new QToolButton(gBox_telec);
        btn_tool->setObjectName(QString::fromUtf8("btn_tool"));
        btn_tool->setGeometry(QRect(150, 20, 31, 31));
        btn_tool->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        line_edit_value = new QLineEdit(gBox_telec);
        line_edit_value->setObjectName(QString::fromUtf8("line_edit_value"));
        line_edit_value->setGeometry(QRect(72, 110, 50, 31));
        QFont font1;
        font1.setPointSize(16);
        line_edit_value->setFont(font1);
        line_edit_value->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        btn_back = new QPushButton(gBox_telec);
        btn_back->setObjectName(QString::fromUtf8("btn_back"));
        btn_back->setGeometry(QRect(30, 60, 31, 31));
        btn_back->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_next = new QPushButton(gBox_telec);
        btn_next->setObjectName(QString::fromUtf8("btn_next"));
        btn_next->setGeometry(QRect(135, 60, 31, 31));
        btn_next->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_telec_pul = new QLabel(gBox_telec);
        lbl_telec_pul->setObjectName(QString::fromUtf8("lbl_telec_pul"));
        lbl_telec_pul->setGeometry(QRect(80, 65, 40, 25));
        lbl_telec_pul->setFont(font1);
        lbl_telec_pul->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_telec_dia = new QLabel(gBox_telec);
        lbl_telec_dia->setObjectName(QString::fromUtf8("lbl_telec_dia"));
        lbl_telec_dia->setGeometry(QRect(80, 40, 40, 25));
        lbl_telec_dia->setFont(font1);
        lbl_telec_dia->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_telec_sys = new QLabel(gBox_telec);
        lbl_telec_sys->setObjectName(QString::fromUtf8("lbl_telec_sys"));
        lbl_telec_sys->setGeometry(QRect(80, 15, 40, 25));
        lbl_telec_sys->setFont(font1);
        lbl_telec_sys->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_close->raise();
        btn_3->raise();
        btn_1->raise();
        btn_2->raise();
        btn_7->raise();
        btn_5->raise();
        btn_6->raise();
        btn_4->raise();
        btn_9->raise();
        btn_8->raise();
        btn_ok->raise();
        btn_tool->raise();
        line_edit_value->raise();
        btn_back->raise();
        btn_next->raise();
        lbl_telec_pul->raise();
        lbl_telec_dia->raise();
        lbl_telec_sys->raise();
        btn_delete->raise();
        btn_0->raise();
        gBox_recap = new QGroupBox(centralwidget);
        gBox_recap->setObjectName(QString::fromUtf8("gBox_recap"));
        gBox_recap->setGeometry(QRect(210, 0, 196, 327));
        gBox_recap->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(101, 124, 255, 69), stop:0.388626 rgba(143, 149, 255, 69), stop:0.42654 rgba(112, 123, 255, 145), stop:0.454976 rgba(23, 81, 255, 208), stop:0.477581 rgba(149, 154, 255, 130), stop:0.516588 rgba(255, 224, 216, 130), stop:0.549763 rgba(255, 74, 45, 255), stop:0.57754 rgba(255, 155, 143, 130), stop:0.611374 rgba(255, 170, 164, 69), stop:1 rgba(255, 159, 159, 69));"));
        lbl_num_sys = new QLabel(gBox_recap);
        lbl_num_sys->setObjectName(QString::fromUtf8("lbl_num_sys"));
        lbl_num_sys->setGeometry(QRect(20, 75, 49, 20));
        lbl_num_sys->setFont(font1);
        lbl_num_sys->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_num_dia = new QLabel(gBox_recap);
        lbl_num_dia->setObjectName(QString::fromUtf8("lbl_num_dia"));
        lbl_num_dia->setGeometry(QRect(20, 125, 49, 20));
        lbl_num_dia->setFont(font1);
        lbl_num_dia->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_num_pul = new QLabel(gBox_recap);
        lbl_num_pul->setObjectName(QString::fromUtf8("lbl_num_pul"));
        lbl_num_pul->setGeometry(QRect(20, 175, 49, 20));
        lbl_num_pul->setFont(font1);
        lbl_num_pul->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lbl_sys = new QLabel(gBox_recap);
        lbl_sys->setObjectName(QString::fromUtf8("lbl_sys"));
        lbl_sys->setGeometry(QRect(90, 75, 39, 21));
        QFont font2;
        font2.setPointSize(14);
        lbl_sys->setFont(font2);
        lbl_sys->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_dia = new QLabel(gBox_recap);
        lbl_dia->setObjectName(QString::fromUtf8("lbl_dia"));
        lbl_dia->setGeometry(QRect(90, 125, 39, 21));
        lbl_dia->setFont(font2);
        lbl_dia->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_pul = new QLabel(gBox_recap);
        lbl_pul->setObjectName(QString::fromUtf8("lbl_pul"));
        lbl_pul->setGeometry(QRect(90, 175, 39, 21));
        lbl_pul->setFont(font2);
        lbl_pul->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_mmhg = new QLabel(gBox_recap);
        lbl_mmhg->setObjectName(QString::fromUtf8("lbl_mmhg"));
        lbl_mmhg->setGeometry(QRect(125, 85, 49, 16));
        lbl_mmhg->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_mmhg2 = new QLabel(gBox_recap);
        lbl_mmhg2->setObjectName(QString::fromUtf8("lbl_mmhg2"));
        lbl_mmhg2->setGeometry(QRect(125, 135, 49, 16));
        lbl_mmhg2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_return = new QPushButton(gBox_recap);
        btn_return->setObjectName(QString::fromUtf8("btn_return"));
        btn_return->setGeometry(QRect(60, 240, 75, 24));
        btn_return->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_send = new QPushButton(gBox_recap);
        btn_send->setObjectName(QString::fromUtf8("btn_send"));
        btn_send->setGeometry(QRect(60, 280, 75, 24));
        btn_send->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_close_2 = new QPushButton(gBox_recap);
        btn_close_2->setObjectName(QString::fromUtf8("btn_close_2"));
        btn_close_2->setGeometry(QRect(10, 20, 31, 31));
        btn_close_2->setFont(font);
        btn_close_2->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        gBox_send = new QGroupBox(centralwidget);
        gBox_send->setObjectName(QString::fromUtf8("gBox_send"));
        gBox_send->setGeometry(QRect(420, 0, 196, 327));
        gBox_send->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(101, 124, 255, 69), stop:0.388626 rgba(143, 149, 255, 69), stop:0.42654 rgba(112, 123, 255, 145), stop:0.454976 rgba(23, 81, 255, 208), stop:0.477581 rgba(149, 154, 255, 130), stop:0.516588 rgba(255, 224, 216, 130), stop:0.549763 rgba(255, 74, 45, 255), stop:0.57754 rgba(255, 155, 143, 130), stop:0.611374 rgba(255, 170, 164, 69), stop:1 rgba(255, 159, 159, 69));"));
        btn_close_3 = new QPushButton(gBox_send);
        btn_close_3->setObjectName(QString::fromUtf8("btn_close_3"));
        btn_close_3->setGeometry(QRect(10, 20, 31, 31));
        btn_close_3->setFont(font);
        btn_close_3->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_answer = new QLabel(gBox_send);
        lbl_answer->setObjectName(QString::fromUtf8("lbl_answer"));
        lbl_answer->setGeometry(QRect(0, 160, 201, 41));
        QFont font3;
        font3.setPointSize(11);
        lbl_answer->setFont(font3);
        lbl_answer->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_error = new QPushButton(gBox_send);
        btn_error->setObjectName(QString::fromUtf8("btn_error"));
        btn_error->setGeometry(QRect(60, 240, 75, 24));
        btn_error->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        gBox_settings = new QGroupBox(centralwidget);
        gBox_settings->setObjectName(QString::fromUtf8("gBox_settings"));
        gBox_settings->setGeometry(QRect(620, 0, 196, 327));
        gBox_settings->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(101, 124, 255, 69), stop:0.388626 rgba(143, 149, 255, 69), stop:0.42654 rgba(112, 123, 255, 145), stop:0.454976 rgba(23, 81, 255, 208), stop:0.477581 rgba(149, 154, 255, 130), stop:0.516588 rgba(255, 224, 216, 130), stop:0.549763 rgba(255, 74, 45, 255), stop:0.57754 rgba(255, 155, 143, 130), stop:0.611374 rgba(255, 170, 164, 69), stop:1 rgba(255, 159, 159, 69));"));
        label = new QLabel(gBox_settings);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-2, 140, 201, 20));
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_close_4 = new QPushButton(gBox_settings);
        btn_close_4->setObjectName(QString::fromUtf8("btn_close_4"));
        btn_close_4->setGeometry(QRect(10, 20, 31, 31));
        btn_close_4->setFont(font);
        btn_close_4->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_confirm = new QPushButton(gBox_settings);
        btn_confirm->setObjectName(QString::fromUtf8("btn_confirm"));
        btn_confirm->setGeometry(QRect(60, 240, 75, 24));
        btn_confirm->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        btn_cancel = new QPushButton(gBox_settings);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(60, 280, 75, 24));
        btn_cancel->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        gBox_waiting = new QGroupBox(centralwidget);
        gBox_waiting->setObjectName(QString::fromUtf8("gBox_waiting"));
        gBox_waiting->setGeometry(QRect(820, 0, 196, 327));
        gBox_waiting->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:135, stop:0 rgba(101, 124, 255, 69), stop:0.388626 rgba(143, 149, 255, 69), stop:0.42654 rgba(112, 123, 255, 145), stop:0.454976 rgba(23, 81, 255, 208), stop:0.477581 rgba(149, 154, 255, 130), stop:0.516588 rgba(255, 224, 216, 130), stop:0.549763 rgba(255, 74, 45, 255), stop:0.57754 rgba(255, 155, 143, 130), stop:0.611374 rgba(255, 170, 164, 69), stop:1 rgba(255, 159, 159, 69));"));
        lbl_waiting = new QLabel(gBox_waiting);
        lbl_waiting->setObjectName(QString::fromUtf8("lbl_waiting"));
        lbl_waiting->setGeometry(QRect(8, 30, 181, 271));
        lbl_waiting->setFont(font3);
        lbl_waiting->setStyleSheet(QString::fromUtf8("background-color: qconicalgradient(cx:0, cy:0, angle:130.4, stop:0 rgba(0, 203, 255, 0), stop:0.240566 rgba(151, 173, 255, 0), stop:0.292453 rgba(255, 255, 255, 0), stop:0.325472 rgba(0, 38, 255, 0), stop:0.339623 rgba(255, 255, 255, 0), stop:0.349057 rgba(255, 255, 255, 0), stop:0.504717 rgba(255, 0, 0, 0), stop:0.580189 rgba(255, 255, 255, 0), stop:0.625 rgba(255, 255, 255, 0), stop:1 rgba(255, 255, 255, 0));"));
        lbl_chiffre = new QLabel(gBox_waiting);
        lbl_chiffre->setObjectName(QString::fromUtf8("lbl_chiffre"));
        lbl_chiffre->setGeometry(QRect(80, 70, 49, 16));
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
        QObject::connect(btn_close_2, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(btn_close_3, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(btn_close_4, SIGNAL(clicked()), MainWindow, SLOT(close()));

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
        btn_close_2->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        gBox_send->setTitle(QCoreApplication::translate("MainWindow", "Envoie", nullptr));
        btn_close_3->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        lbl_answer->setText(QCoreApplication::translate("MainWindow", "R\303\251ponse", nullptr));
        btn_error->setText(QCoreApplication::translate("MainWindow", "ERREUR", nullptr));
        gBox_settings->setTitle(QCoreApplication::translate("MainWindow", "Param\303\250tres", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Param\303\250tres modifiables", nullptr));
        btn_close_4->setText(QCoreApplication::translate("MainWindow", "X", nullptr));
        btn_confirm->setText(QCoreApplication::translate("MainWindow", "VALIDER", nullptr));
        btn_cancel->setText(QCoreApplication::translate("MainWindow", "ANNULER", nullptr));
        gBox_waiting->setTitle(QCoreApplication::translate("MainWindow", "Attente", nullptr));
        lbl_waiting->setText(QCoreApplication::translate("MainWindow", "En attente de la connexion \n"
" d'un tensiom\303\250tre...", nullptr));
        lbl_chiffre->setText(QCoreApplication::translate("MainWindow", "chiffre", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
