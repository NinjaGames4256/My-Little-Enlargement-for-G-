#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "function.h"

#include <QPlainTextEdit>
#include <QStackedWidget>
#include <QMainWindow>
#include <iostream>
#include <fstream>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:

    Function func;

    std::string code;

    std::string ProjectNameString;


private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_OpenInOpen_clicked();

    void on_BuildButton_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_8_clicked();

    void on_BackOpen_clicked();

    void on_BackCreate_clicked();

    void on_Add_clicked();

    void on_Minus_clicked();

    void on_CreateNewItemButon_clicked();

    void on_CreateNewItemBack_clicked();

    void Loading();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
