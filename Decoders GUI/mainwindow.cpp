#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    updateRestTable();
    QVector<QString>restNameCB = db.getRestNames();
    for(int i = 0; i < restNameCB.length(); i++ )
    {
        ui->adminRC->addItem(restNameCB.at(i));
    }
    ui->adminRC->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ClearItemTable()
{
    int currentRows = ui->adminMenuItem->rowCount();
    int currentCol =  ui->adminMenuItem->columnCount();

    for(int rowRemove = 0; rowRemove < currentRows; rowRemove++)
    {
        ui->adminMenuItem->removeRow(0);
    }

    for(int colRemove = 0; colRemove < currentCol; colRemove++)
    {
        ui->adminMenuItem->removeColumn(0);
    }

}
void MainWindow::ClearRestTable(){
    int currentRows = ui->AdminRestView->rowCount();
    int currentCol =  ui->AdminRestView->columnCount();

    for(int rowRemove = 0; rowRemove < currentRows; rowRemove++)
    {
        ui->AdminRestView->removeRow(0);
    }

    for(int colRemove = 0; colRemove < currentCol; colRemove++)
    {
        ui->AdminRestView->removeColumn(0);
    }
}

void MainWindow::on_pushButton_6_clicked()
{
//    ClearTable();

//    int col = 0;
//    int row = 0;

//    ui->defRestTable->horizontalHeader()->setVisible(true);

//    /* Sets the columns of the of table for Registered customers*/


//    ui->defRestTable->insertColumn(col);
//    ui->defRestTable->setHorizontalHeaderItem(col, new QTableWidgetItem("Restaurant Name"));
//    col++;

//    ui->defRestTable->insertColumn(col);
//    ui->defRestTable->setHorizontalHeaderItem(col, new QTableWidgetItem("Distance from Saddleback"));
//    col++;



//    /*  Will fill tables depending on how information is collected from database
//     *   need to run through a loop
//     */

//    QVector<QString> list = db.getRestNames();

//    for(int i = 0; i < list.size(); i++)
//    {
//        QString username = list.at(i);

//        ui->CustomersTable->insertRow(row);
//        ui->CustomersTable->setItem(row, 2, new QTableWidgetItem(db.retrieveCustomerCompany(username)));
//        ui->CustomersTable->setItem(row, 0, new QTableWidgetItem(db.retrieveCustomerName(username)));
//        row++;
//    }

//    ui->CustomersTable->resizeColumnsToContents();
//    ui->CustomersTable->horizontalHeader()->setStretchLastSection(true);
}

void MainWindow::on_pushButton_8_clicked()
{

}

void MainWindow::on_pushButton_11_clicked()
{
    QVector<double> distances;
       // QString Test = db.getItemPrice("MacDonald’s", "Big Mac");
        qDebug() << db.updateDistances(distances );

}

void MainWindow::on_comboBox_3_currentTextChanged(const QString &arg1)
{


}

void MainWindow::on_adminRC_currentTextChanged(const QString &arg1)
{
    updateItemTable();
}
void MainWindow::updateItemTable()
{
    ui->adminMenuItem->clear();
    ClearItemTable();
    int col = 0;
    int row = 0;
    ui->adminMenuItem->horizontalHeader()->setVisible(true);

    ui->adminMenuItem->insertColumn(col);
    ui->adminMenuItem->setHorizontalHeaderItem(col, new QTableWidgetItem("Price"));


    ui->adminMenuItem->insertColumn(col);
    ui->adminMenuItem->setHorizontalHeaderItem(col, new QTableWidgetItem("Item"));

    QVector<QString> currentRestIn = db.getMenuItems(ui->adminRC->currentText());
    qDebug() << ui->adminRC->currentText();


    for(unsigned i = 0; i < currentRestIn.length();i++)
    {
        ui->adminMenuItem->insertRow(row);
        ui->adminMenuItem->setItem(row, 0, new QTableWidgetItem(currentRestIn.at(i)));
        ui->adminMenuItem->setItem(row, 1, new QTableWidgetItem(db.getItemPrice(ui->adminRC->currentText(),currentRestIn.at(i))));
    }
    ui->adminMenuItem->resizeColumnsToContents();
    ui->adminMenuItem->horizontalHeader()->setStretchLastSection(true);
    ui->adminItemSelection->clear();
    for(int i = 0; i < currentRestIn.length(); i++ )
    {
        ui->adminItemSelection->addItem(currentRestIn.at(i));
    }
    ui->adminItemSelection->setCurrentIndex(0);
    if(db.getNumItems(ui->adminRC->currentText()).toInt() == 8){
        ui->addToMenu->hide();
        ui->overfl0w->show();

    }
    else{
        ui->addToMenu->show();
        ui->overfl0w->hide();
    }
}

void MainWindow::updateRestTable(){
    ui->AdminRestView->clear();
    ClearRestTable();
    int col = 0;
    int row = 0;
    ui->AdminRestView->horizontalHeader()->setVisible(true);

    ui->AdminRestView->insertColumn(col);
    ui->AdminRestView->setHorizontalHeaderItem(col, new QTableWidgetItem("Total Menu Items"));


    ui->AdminRestView->insertColumn(col);
    ui->AdminRestView->setHorizontalHeaderItem(col, new QTableWidgetItem("Total Revenue"));

    ui->AdminRestView->insertColumn(col);
    ui->AdminRestView->setHorizontalHeaderItem(col, new QTableWidgetItem("Distance from Saddleback"));

    ui->AdminRestView->insertColumn(col);
    ui->AdminRestView->setHorizontalHeaderItem(col, new QTableWidgetItem("Name"));

    QVector<QString> currentRest = db.getRestNames();
//    qDebug() << ui->adminRC->currentText();


    for(unsigned i = 0; i < currentRest.length();i++)
    {
        ui->AdminRestView->insertRow(row);
        ui->AdminRestView->setItem(row, 0, new QTableWidgetItem(currentRest.at(i)));
        ui->AdminRestView->setItem(row, 1, new QTableWidgetItem(db.getSadDist(currentRest.at(i))));
        ui->AdminRestView->setItem(row, 2, new QTableWidgetItem(db.getRev(currentRest.at(i))));
        ui->AdminRestView->setItem(row, 3, new QTableWidgetItem(db.getNumItems(currentRest.at(i))));
    }
    ui->AdminRestView->resizeColumnsToContents();
    ui->AdminRestView->horizontalHeader()->setStretchLastSection(true);

}

void MainWindow::on_adminCP_clicked()
{
    QString itemName = ui->adminItemSelection->currentText();
    QString restName = ui->adminRC->currentText();
    double changedPrice = ui->adminModSpin->value();
    qDebug() << changedPrice;
    if(db.updateItem(restName,itemName,changedPrice))
    {
        QMessageBox::information(this, tr("We Gucci!"),
                                            "should be updated.");
    }
    else
    {
        QMessageBox::information(this, tr("Invalid!"),
                                            "Fuck this shit");
    }
    updateItemTable();
}

void MainWindow::on_adminDelItem_clicked()
{
    QString itemName = ui->adminItemSelection->currentText();
    QString restName = ui->adminRC->currentText();
    if(db.removeItem(restName,itemName)){
        QMessageBox::information(this, tr("We Gucci!"),
                                            "should be updated.");
    }
    else
    {
        QMessageBox::information(this, tr("Invalid!"),
                                            "Fuck this shit");
    }
    updateItemTable();
}



void MainWindow::on_addToMenu_clicked()
{
    QString restName = ui->adminRC->currentText();
    QString addItemName = ui->addItemName->text();
    double addItemPrice = ui->adminItemSpin->value();
    //db.addItem(ui->adminRC->currentText(),ui->addItemName->text(),ui->adminItemSpin->value());
     if(db.addItem(restName,addItemName,addItemPrice)){
         QMessageBox::information(this, tr("We Gucci!"),
                                             "should be added");
     }
     else{
         QMessageBox::information(this, tr("Invalid!"),
                                             "Duplicate Item");
     }
     updateItemTable();
}
