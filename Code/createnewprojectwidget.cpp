#include "createnewprojectwidget.h"
#include "ui_createnewprojectwidget.h"

CreateNewProjectWidget::CreateNewProjectWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CreateNewProjectWidget)
{
    ui->setupUi(this);
}

CreateNewProjectWidget::~CreateNewProjectWidget()
{
    delete ui;
}
