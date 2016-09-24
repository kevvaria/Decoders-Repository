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

void MainWindow::on_dial_rangeChanged(int min, int max)
{

}

void MainWindow::on_pushButton_2_clicked()
{
    QVector<QString> restNames = db.getRestNames();

}
