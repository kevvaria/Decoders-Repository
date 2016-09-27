#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_2_clicked()
{
//    qDebug() << "here";
   // QVector<QString> restNames = db.getRestNames();
//    for(int i = 0; i < restNames.length(); i++)
//    {
//        qDebug() << restNames.at(i);
//    }


   // QString Test = db.getItemPrice("MacDonald’s", "Big Mac");
    qDebug() << db.updateItem("In-N-Out Burger", "Hamburger", 0.23);


}
