#ifndef CREATENEWPROJECTWIDGET_H
#define CREATENEWPROJECTWIDGET_H

#include <QWidget>

namespace Ui {
class CreateNewProjectWidget;
}

class CreateNewProjectWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CreateNewProjectWidget(QWidget *parent = nullptr);
    ~CreateNewProjectWidget();

private:
    Ui::CreateNewProjectWidget *ui;
};

#endif // CREATENEWPROJECTWIDGET_H
