#ifndef CREATENEWWINDOW_H
#define CREATENEWWINDOW_H

#include <QWidget>

namespace Ui {
class CreateNewWindow;
}

class CreateNewWindow : public QWidget
{
    Q_OBJECT

public:
    explicit CreateNewWindow(QWidget *parent = nullptr);
    ~CreateNewWindow();

private slots:
    void on_comboBox_activated(int index);

private:
    Ui::CreateNewWindow *ui;
};

#endif // CREATENEWWINDOW_H
