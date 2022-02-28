#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <clientTCP.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow, ClientTCP
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    ClientTCP Client;

private slots:

    void ajouterChiffre(QString chiffre);

    void on_btn_0_clicked();

    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_btn_3_clicked();

    void on_btn_4_clicked();

    void on_btn_5_clicked();

    void on_btn_6_clicked();

    void on_btn_7_clicked();

    void on_btn_8_clicked();

    void on_btn_9_clicked();

    void on_btn_delete_clicked();

    void on_btn_ok_clicked();

    void on_btn_return_clicked();

    void on_btn_next_clicked();

    void on_btn_back_clicked();

    void on_btn_send_clicked();

    void on_btn_tool_clicked();

    void on_btn_confirm_clicked();

    void on_btn_cancel_clicked();

    void on_btn_error_clicked();

    void on_btn_start_clicked();

    void on_btn_return_2_clicked();

    void on_btn_restart_clicked();

private:
    Ui::MainWindow *ui;

};
#endif // MAINWINDOW_H
