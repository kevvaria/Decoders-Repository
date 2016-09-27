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

void MainWindow::on_lineEdit_2_textEdited(const QString &arg1)
{

}

void MainWindow::on_pushButton_6_clicked()
{
    ClearTable();

    int col = 0;
    int row = 0;

    ui->defRestTable->horizontalHeader()->setVisible(true);

    /* Sets the columns of the of table for Registered customers*/


    ui->defRestTable->insertColumn(col);
    ui->defRestTable->setHorizontalHeaderItem(col, new QTableWidgetItem("Restaurant Name"));
    col++;

    ui->defRestTable->insertColumn(col);
    ui->defRestTable->setHorizontalHeaderItem(col, new QTableWidgetItem("Distance from Saddleback"));
    col++;



    /*  Will fill tables depending on how information is collected from database
     *   need to run through a loop
     */

    QVector<QString> list = db.getUserNames(1);

    for(int i = 0; i < list.size(); i++)
    {
        QString username = list.at(i);

        ui->defRestTable->insertRow(row);
        ui->defRestTable->setItem(row, 2, new QTableWidgetItem(db.retrieveCustomerCompany(username)));
        ui->defRestTable->setItem(row, 0, new QTableWidgetItem(db.retrieveCustomerName(username)));
        row++;
    }

    ui->defRestTable->resizeColumnsToContents();
    ui->defRestTable->horizontalHeader()->setStretchLastSection(true);
}
