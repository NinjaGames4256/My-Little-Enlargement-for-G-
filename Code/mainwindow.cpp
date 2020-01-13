#include "mainwindow.h"
#include "ui_mainwindow.h"

using namespace std;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Flags->setVisible(false);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_3_clicked()
{

    if(ui->ProjectName->toPlainText().toStdString() != ""){

        ProjectNameString = ui->ProjectName->toPlainText().toStdString();

        int choose = ui->comboBox->currentIndex();

        if(choose == 4 ){
            ui->Flags->setVisible(true);

            if(ui->Flags->toPlainText().toStdString() != ""){

                choose = 4;

                func.CreateNewProject(choose, ProjectNameString, ui->ProjectName->toPlainText().toStdString() );

                ui->stackedWidget->setCurrentIndex(2);

                ui->PlaceForCode->setPlainText( func.OpenFile(ProjectNameString, "main.cpp" ).c_str() );

                fstream files;

                files.open( string(func.ReturnHome() + "/Desktop/TermIDE/" + ProjectNameString + "/files.info").c_str(), ios::in | ios::out | ios::binary );

                if(files.good()){
                    Loading();

                    ui->Flags->clear();
                    ui->ProjectName->clear();

                }

            }

        } else{

            ui->stackedWidget->setCurrentIndex(2);

            func.CreateNewProject(choose, ProjectNameString);

            ui->PlaceForCode->setPlainText( func.OpenFile(ProjectNameString, "main.cpp" ).c_str() );

            fstream files;

            files.open( string(func.ReturnHome() + "/Desktop/TermIDE/" + ProjectNameString + "/files.info").c_str(), ios::in | ios::out | ios::binary );

            if(files.good()){
                Loading();

                ui->Flags->clear();
                ui->ProjectName->clear();

            }

        }

    }


}

void MainWindow::on_OpenInOpen_clicked()
{
    if( ui->NameOfProjectInOpen->toPlainText().toStdString() != "" ){
        ProjectNameString = ui->NameOfProjectInOpen->toPlainText().toStdString();
        ui->PlaceForCode->setPlainText( func.OpenFile(ProjectNameString, "main.cpp" ).c_str() );
        ui->stackedWidget->setCurrentIndex(2);
        Loading();
        ui->NameOfProjectInOpen->clear();
    }
}

void MainWindow::on_BuildButton_clicked()
{
    func.Build(ProjectNameString);
}

void MainWindow::on_pushButton_5_clicked()
{
    func.Run(ProjectNameString);
}

void MainWindow::on_pushButton_4_clicked()
{

    string name = ui->listWidget->currentItem()->text().toStdString();

    ui->PlaceForCode->setPlainText( func.OpenFile(ProjectNameString, name ).c_str() );
}

void MainWindow::on_pushButton_6_clicked()
{
    string name = ui->listWidget->currentItem()->text().toStdString();

    func.SaveFile( ProjectNameString, name, ui->PlaceForCode->toPlainText().toStdString() );
}

void MainWindow::on_pushButton_8_clicked()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::on_BackOpen_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_BackCreate_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_Add_clicked()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::on_Minus_clicked()
{
    QListWidgetItem *it = ui->listWidget->takeItem(ui->listWidget->currentRow());
    delete it;
}

void MainWindow::on_CreateNewItemButon_clicked()
{
    if(ui->NameNewItem->toPlainText().toStdString() != ""){

        ui->listWidget->addItem( ui->NameNewItem->toPlainText().toStdString().c_str() );

        ui->stackedWidget->setCurrentIndex(2);

        func.SaveNewItems(ui->NameNewItem->toPlainText().toStdString(), ProjectNameString);

        ui->NameNewItem->clear();

    }
}

void MainWindow::on_CreateNewItemBack_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::Loading(){

    std::string Name;
    fstream file;

    string files;

    string PATH = func.ReturnHome() + "/Desktop/TermIDE/" + ProjectNameString + "/files.info";

    file.open( PATH, ios::in | ios::out | ios::binary );
    if(!file.is_open()){
        std::cout << "Error" << std::endl;
    } else{

        while(std::getline(file, Name, '\n')){
            files += Name;
            ui->listWidget->addItem(files.c_str());
            files.clear();
        }

        cout << Name << endl;

        cout << files << endl;

        cout << "Załadowano obiekt" << endl;

    }

}

void MainWindow::on_pushButton_7_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
    ui->listWidget->clear();
}
