#include "createnewwindow.h"
#include "ui_createnewwindow.h"

CreateNewWindow::CreateNewWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateNewWindow)
{
    ui->setupUi(this);
}

CreateNewWindow::~CreateNewWindow()
{
    delete ui;
}

void CreateNewWindow::on_comboBox_activated(int index)
{

}
