#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(on_pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString flights[]={"flight101","flight102","flight103"};
    int seats[]={20,50,30};
    QString uFlight = ui->lineEdit->text();
    QString uName = ui->lineEdit_2->text();
    bool found=false;

    for (int i=0;flights->length();i++){
        if(uFlight==flights[i] && seats[i]>0){
            QMessageBox::information(this,"Success Message","User Name: "+uName+"\n"+"Flight: "+flights[i]+"\n"+"Reserverd Seat Successfuly");
            found=true;
            break;
        }
        else if(!found){
            QMessageBox::information(this,"Error Message","Incorrect Flight Number or Seats unavailable");
        }
    }
}

