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
    index = 0;
    numRests = restNameCB.size(); //this will change to a db method

    ui->AddRestaurant->hide();
    ui->addIndicator->hide();
    ui->DistAdd->show();
   ui->restIndicator->setText( "Distance to: "+ db.getRestName(index));

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
    //qDebug() << db.updateDistances(distances );

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


    for(int i = 0; i < currentRestIn.length();i++)
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


    for(int i = 0; i < currentRest.length();i++)
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
        QMessageBox::information(this, tr("Updated!"),
                                 "Item has been updated");
    }
    else
    {
        QMessageBox::information(this, tr("Invalid!"),
                                 "Error in operation");
    }
    updateItemTable();
}

void MainWindow::on_adminDelItem_clicked()
{
    QString itemName = ui->adminItemSelection->currentText();
    QString restName = ui->adminRC->currentText();
    if(db.removeItem(restName,itemName)){
        QMessageBox::information(this, tr("Deleted!"),
                                 "Item was removed.");
    }
    else
    {
        QMessageBox::information(this, tr("Invalid!"),
                                 "Error in operation");
    }
    updateItemTable();
}



void MainWindow::on_addToMenu_clicked()
{
    QString restName = ui->adminRC->currentText();
    QString addItemName = ui->addItemName->text().trimmed();
    double addItemPrice = ui->adminItemSpin->value();

    if(!addItemName.isEmpty())
    {
        if(db.addItem(restName,addItemName,addItemPrice)){
            QMessageBox::information(this, tr("Added!"),
                                     "Item has been added");
        }
        else{
            QMessageBox::information(this, tr("Invalid!"),
                                     "Duplicate Item");
        }
    }
    else
    {
        QMessageBox::information(this, tr("Invalid!"),
                                 "Please fill all fields");
    }

    updateItemTable();
}



void MainWindow::on_AddRestaurant_clicked()
{
    qDebug() << "here";
    //QVector<double> distances;

    QString restName = ui->newRestname->text().trimmed();
    double dis2Sad = ui->dis2Saddle->value();

    if(!restName.isEmpty())
    {
        if(db.addRest(restName, dis2Sad, distIn))
        {
            QMessageBox::information(this, tr("Added!"),
                                     restName + " added to the list");

        }
        else
        {
            QMessageBox::information(this, tr("Error"),
                                     "Duplicate Restaurant");
        }
    }
    else
    {
        QMessageBox::information(this, tr("Error"),
                                 "Please fill all fields");
    }


    distIn.clear();
    ui->AddRestaurant->hide();
    ui->DistEdit->show();
    ui->addIndicator->hide();
    ui->DistAdd->show();
    index = 0;
    ui->restIndicator->setText( "Distance to: "+ db.getRestName(index));

    ui->newRestname->clear();
    ui->dis2Saddle->setValue(0.00);
    ui->DistEdit->setValue(0.00);



    distIn.clear();
    updateRestTable();
     ui->adminRC->clear();
    QVector<QString>restNameCB = db.getRestNames();
    for(int i = 0; i < restNameCB.length(); i++ )
    {
        ui->adminRC->addItem(restNameCB.at(i));
    }


}

bool MainWindow::add2Rests()
{
    //add sonic to the db
    QVector<double> distances;
    distances.push_back(11.5);
    distances.push_back(14.2);
    distances.push_back(13.4);
    distances.push_back(16.5);
    distances.push_back(3.3);
    distances.push_back(12.2);
    distances.push_back(7.8);
    distances.push_back(6.9);
    distances.push_back(8.2);
    distances.push_back(6.11);
    if(db.addRest("Sonic", 11.1, distances))
    {
        //add its menuItems
        db.addItem("Sonic", "Sonic hamburger", 3.99);
        db.addItem("Sonic", "Sonic cheeseburger", 4.29);
        db.addItem("Sonic", "New York dog", 2.89);
        db.addItem("Sonic", "French fries", 1.79);
        db.addItem("Sonic", "Medium Pepsi", 2.55);
        updateRestTable();
        QVector<QString>restNameCB = db.getRestNames();
        for(int i = 0; i < restNameCB.length(); i++ )
        {
            ui->adminRC->addItem(restNameCB.at(i));
        }

        QVector<double> distances2;
        distances2.push_back(13.8);
        distances2.push_back(4.4);
        distances2.push_back(18.1);
        distances2.push_back(18.8);
        distances2.push_back(0.8);
        distances2.push_back(8.2);
        distances2.push_back(10.8);
        distances2.push_back(9.4);
        distances2.push_back(5.5);
        distances2.push_back(11.8);
        distances2.push_back(3.7);

        if(db.addRest("Pizza Hut", 4.6, distances2))
        {
            db.addItem("Pizza Hut", "Veggie Pizza", 4.99);
            db.addItem("Pizza Hut", "Pepperoni pizza", 8.99);
            db.addItem("Pizza Hut", "All meat pizza", 12.99);
            db.addItem("Pizza Hut", "Cheese pizza", 5.99);
            db.addItem("Pizza Hut", "Mushroom and pepperoni pizza", 6.99);
            db.addItem("Pizza Hut", "Mushroom and green pepper pizza", 7.29);
            updateRestTable();
            ui->adminRC->clear();
            QVector<QString>restNameCB = db.getRestNames();
            for(int i = 0; i < restNameCB.length(); i++ )
            {
                ui->adminRC->addItem(restNameCB.at(i));
            }
             return true;
        }
    }
    return false;
}



void MainWindow::on_pushButton_4_clicked()
{
    if(add2Rests())
    {
        QMessageBox::information(this, tr("Done"),
                                 "Sonic and Pizza hut have been added");
    }
    else
    {
        QMessageBox::information(this, tr("Invalid!"),
                                 "This operation was already performed!");
    }
}

void MainWindow::on_DistAdd_clicked()
{
    if(index < numRests)
    {
        distIn.push_back(ui->DistEdit->value());
        index++;
        if(index < numRests)
        {
            ui->restIndicator->setText( "Distance to: "+ db.getRestName(index));
        }
        else
        {
            ui->AddRestaurant->show();
            ui->addIndicator->show();
            ui->DistAdd->hide();
        }
        qDebug() << numRests;
        qDebug() << index;
    }
    else
    {
        ui->AddRestaurant->show();
        ui->addIndicator->show();
        ui->DistAdd->hide();
    }

}
