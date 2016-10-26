#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;
/*!
   * \file mainwindow.cpp
   * \brief  Header for mainwindow class
   *
   * This file contains all of the definitions of the mainwindow class
   */
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    numAdd = 0;
    tripNum = 0;
    indexTrip = 0;
    ui->setupUi(this);
    ui->diabetes->setValue(0);
    ui->c1SB->setMinimum(1);
    ui->quantityPurchase->setMinimum(1);
    ui->dlvl->setText("1");
    updateRestTable();
    initcRest();
    ui->startTrip->hide();
    ui->c1SB->hide();
    ui->restList->hide();
    ui->restTable->hide();
    ui->c1Label->hide();
    ui->loR->hide();
    ui->start->hide();
    ui->label_9->hide();
    ui->addR->hide();

    ui->quantityPurchase->setValue(1);
    QVector<QString>restNameCB = db.getRestNames();
    for(int i = 0; i < restNameCB.length(); i++ )
    {
        ui->adminRC->addItem(restNameCB.at(i));
    }
    numRests = restNameCB.size(); //this will change to a db method
    ui->adminRC->setCurrentIndex(0);
    index = 0;
    initializeRest();
    ui->AddRestaurant->hide();
    ui->addIndicator->hide();
    ui->DistAdd->show();
    ui->restIndicator->setText( "Distance to: "+ db.getRestName(index));
    isLoggedIn = false;
    //  initializeReceipt();
    //displayMenu();
    indexTrip = 0;
    row =0;
    col = 0;
    // displayMenu();
    // initializeReceipt();
    //start on the home page
    ui->mainTab->setCurrentIndex(0);
    //remove the trips tab upon start
    ui->mainTab->removeTab(1);
    //remove the admin tab

    ui->mainTab->removeTab(1);

    //remove both tabs
    ui->TripsTab1->removeTab(0);
    ui->TripsTab1->removeTab(0);
    ui->loginButton->hide();
    totDistTraveled = 0;

}

void MainWindow::clearReceipt(){
    int currentRows = ui->defPurchase->rowCount();
    int currentCol =  ui->defPurchase->columnCount();

    for(int rowRemove = 0; rowRemove < currentRows; rowRemove++)
    {
        ui->defPurchase->removeRow(0);
    }

    for(int colRemove = 0; colRemove < currentCol; colRemove++)
    {
        ui->defPurchase->removeColumn(0);
    }
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

    //Delete Menu from trips
    currentRows = ui->defMenu->rowCount();
    currentCol =  ui->defMenu->columnCount();

    for(int rowRemove = 0; rowRemove < currentRows; rowRemove++)
    {
        ui->defMenu->removeRow(0);
    }

    for(int colRemove = 0; colRemove < currentCol; colRemove++)
    {
        ui->defMenu->removeColumn(0);
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
    for(int rowRemove = 0; rowRemove < currentRows; rowRemove++)
    {
        ui->restTable->removeRow(0);
    }

    for(int colRemove = 0; colRemove < currentCol; colRemove++)
    {
        ui->restTable->removeColumn(0);
    }
}

void MainWindow::on_pushButton_6_clicked()
{

}

void MainWindow::on_pushButton_8_clicked()
{

}

void MainWindow::on_pushButton_11_clicked()
{
    QVector<double> distances;
    // QString Test = db.getItemPrice("MacDonald’s", "Big Mac");
    //(qDebug)() << db.updateDistances(distances );

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
    //qDebug() << ui->adminRC->currentText();


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
    qDebug() << "starting the update";
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

    qDebug() << "leaving update";

}

void MainWindow::on_adminCP_clicked()
{
    QString itemName = ui->adminItemSelection->currentText();
    QString restName = ui->adminRC->currentText();
    double changedPrice = ui->adminModSpin->value();
    //qDebug() << changedPrice;
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
    //qDebug() << "here";
    //QVector<double> distances;

    QString restName = ui->newRestname->text().trimmed();
    double dis2Sad = ui->dis2Saddle->value();

    if(!restName.isEmpty())
    {
        if(db.addRest(restName, dis2Sad, distIn))
        {
            QMessageBox::information(this, tr("Added!"),
                                     restName + " added to the list");
            numRests++;
            initializeRest();
            initcRest();


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
    if(numRests == 10)
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
            // updateRestTable();

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
                //  updateRestTable();

                ui->adminRC->clear();
                QVector<QString>restNameCB = db.getRestNames();
                for(int i = 0; i < restNameCB.length(); i++ )
                {
                    ui->adminRC->addItem(restNameCB.at(i));
                }
                return true;
            }
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
        //DO NOT CHANGE THE ORDER OF THESE OR THINGS WILL BREAK
        numRests +=2;
        initializeRest();
        initcRest();
        updateRestTable();


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
        // qDebug() << numRests;
        // qDebug() << index;
    }
    else
    {
        ui->AddRestaurant->show();
        ui->addIndicator->show();
        ui->DistAdd->hide();
    }

}

QVector<Distance> MainWindow::distancestoStr(QString dist) {
    /* * QVector<double> distDoubles;
     * QString dist = db.getDistances("Chipotle");
     * //get the distances for specified rest
     * //qDebug() << dist;
     * distDoubles= distancestoStr(dist);
     * //parse the distances string out, then assign it to
     * the object, qvector has the = operator overloaded
     * qDebug() << distDoubles; */

    QVector<Distance> distDoubles;
    QStringList list = dist.split(' ');

    //qDebug() << list;
    for(int i = 0; i < list.size(); i++){
        QString temp= list.at(i);
        distDoubles.push_back(Distance(i, temp.toDouble()));
    }

    qSort(distDoubles.begin(),distDoubles.end(), DistSort());


    return distDoubles;
}
//login functionality
void MainWindow::on_loginButton_clicked()
{
    if(!isLoggedIn)
    {
        logWindow.exec();

        if(logWindow.getValid())
        {
            ui->loginButton->show();
            isLoggedIn = true;
            ui->mainTab->addTab(ui->AdminTab, "Admin");
            ui->loginButton->setText("LogOut");
            updateItemTable();
            updateRestTable();
            ui->mainTab->setCurrentWidget(ui->AdminTab);


        }
        else
        {
            QMessageBox::information(this, tr("Aborted"),
                                     "Login failed/aborted.");
        }
    }
    else
    {
        ui->mainTab->removeTab(1);
        isLoggedIn = false;
        ui->loginButton->hide();
        //    ui->loginButton->setText("Administrative Login");

    }
}


void MainWindow:: dMenu(){
    //    QString currentRestIn = ui->dCurrentRest->text();
    //    ui->menuCB->clear();
    //    displayMenu(currentRestIn);
}

void MainWindow::displayMenu(){

    ui->menuCB->clear();
    ui->defMenu->clear();
    ClearItemTable();
    int col = 0;
    int row = 0;
    ui->defMenu->horizontalHeader()->setVisible(true);

    ui->defMenu->insertColumn(col);
    ui->defMenu->setHorizontalHeaderItem(col, new QTableWidgetItem("Price"));


    ui->defMenu->insertColumn(col);
    ui->defMenu->setHorizontalHeaderItem(col, new QTableWidgetItem("Item"));

    QVector<QString> currentRestIn = db.getMenuItems(ui->dCurrentRest->text());
    //qDebug() << "Current restuarant" << currentRestIn;
    for(int i = 0; i < currentRestIn.length();i++)
    {
        ui->defMenu->insertRow(row);
        ui->defMenu->setItem(row, 0, new QTableWidgetItem(currentRestIn.at(i)));
        ui->defMenu->setItem(row, 1, new QTableWidgetItem(db.getItemPrice(nSort[indexTrip].getRestaurantName(),currentRestIn.at(i))));
    }
    ui->defMenu->resizeColumnsToContents();
    ui->defMenu->horizontalHeader()->setStretchLastSection(true);

    for(int i = 0; i < currentRestIn.length(); i++ )
    {
        ui->menuCB->addItem(currentRestIn.at(i));
    }
    ui->menuCB->setCurrentIndex(0);
}

void MainWindow::on_quantityPurchase_valueChanged(int arg1)
{
    double itemPrice = db.getItemPrice(ui->dCurrentRest->text(),ui->menuCB->currentText()).toDouble();
    // qDebug() << itemPrice;
    double quan = (arg1 * itemPrice);
    // qDebug() << quan;
    QString purchaseT = QString::number(quan);
    // qDebug() << purchaseT;
    ui->PT->setText(purchaseT);
}

void MainWindow::initializeRest(){
    rest.clear();
    for(int i = 0; i < numRests; i++){
        rest.push_back(Restaurant(db.getRestName(i),db.getSadDist(db.getRestName(i)).toDouble(),distancestoStr(db.getDistances(db.getRestName(i)))));
        Restaurant dum = rest.at(i);
        //qDebug() << dum.getRestaurantName();
    }
}

void MainWindow::on_menuCB_currentIndexChanged(const QString &arg1)
{
    QVector<QString> currentRestIn = db.getMenuItems(ui->dCurrentRest->text());
    ui->quantityPurchase->setValue(1);
    double value=db.getItemPrice(ui->dCurrentRest->text(),ui->menuCB->currentText()).toDouble()* ui->quantityPurchase->value() ;
    ui->PT->setText(QString::number(value, 'f', 2));
}
//buy item on a trip
void MainWindow::on_pushButton_2_clicked()
{

    if(ui->quantityPurchase->value() !=0)
    {
        double cur = ui->CR->text().toDouble() + updateReceipt(row, col);
        ui->CR->setText(QString::number(cur, 'f', 2));
        //need to add total rev for this rest
        //same for the db
        nSort[indexTrip].updateRev(ui->PT->text().toDouble());
        //        rest[getRestIndex(nSort.at(indexTrip))].updateRev(ui->PT->text().toDouble());
        db.updateTotRev(ui->dCurrentRest->text(), ui->PT->text().toDouble());
        spentInTrip += ui->PT->text().toDouble();
        //qDebug() << spentInTrip;
    }
    else
    {
        QMessageBox::information(this, tr("Invalid"),
                                 "You need at least 1 in the quantity");
    }


}

double MainWindow::updateReceipt(int row, int column){


    double itemPrice = db.getItemPrice(ui->dCurrentRest->text(),ui->menuCB->currentText()).toDouble();


    ui->defPurchase->insertRow(row);
    ui->defPurchase->setItem(row, 0, new QTableWidgetItem(ui->menuCB->currentText()));
    ui->defPurchase->setItem(row, 1, new QTableWidgetItem(ui->quantityPurchase->text()));
    ui->defPurchase->setItem(row, 2, new QTableWidgetItem(QString::number(itemPrice, 'f', 2)));
    ui->defPurchase->setItem(row, 3, new QTableWidgetItem(ui->PT->text()));

    ui->defPurchase->resizeColumnsToContents();
    ui->defPurchase->horizontalHeader()->setStretchLastSection(true);
    return ui->PT->text().toDouble();
}



//bool MainWindow::on_nextRest_toggled(bool checked)
//{
//    double cur = ui->GT->text().toDouble() + ui->CR->text().toDouble();
//    ui->GT->setText(QString::number(cur));
//    indexr++;
//    qDebug() << ui->nextRest->isChecked();
//    return ui->nextRest->isChecked();
//}

void MainWindow::on_nextRest_clicked()
{

    ui->quantityPurchase->setValue(1);
    double cur = ui->GT->text().toDouble() + ui->CR->text().toDouble();
    ui->GT->setText(QString::number(cur, 'f', 2));
    indexTrip++;
    if(indexTrip < nSort.size()){
        //        if(ui->diabetes->value() < 100){
        //            double every5 = ui->CR->text().toDouble()/5;
        //            qDebug() << "every5: " << every5;
        //            if(every5 > 100){
        //                ui->dlvl->setText(QString::number((int)(every5/100) + ui->dlvl->text().toInt()));
        //                if(((int)every5 % 100) + (double)ui->diabetes->value() > 100){
        //                        ui->diabetes->setValue((((int)every5%100) + ui->diabetes->value()) - 100);
        //                }
        //                else{
        //                    ui->diabetes->setValue(((int)every5%100) + ui->diabetes->value());
        //                }
        //            }
        //            else{
        //                if((((int)every5%100) + ui->diabetes->value()) > 100){
        //                   ui->dlvl->setText(QString::number(((int)every5%100+ ui->diabetes->value() - 100) + ui->dlvl->text().toInt()));
        //                   ui->diabetes->setValue(((int)every5%100) + ui->diabetes->value() - 100);
        //                }
        //                else{
        //                    ui->diabetes->setValue(((int)every5%100) + ui->diabetes->value());
        //                }
        //            }
        //            every5 = 0;
        //        }
        checkDiabetes(ui->dlvl->text().toInt());
        ui->PT->setText("0.00");
        ui->CR->setText("0.00");
        ui->menuCB->clear();
        Restaurant dummy = nSort.at(indexTrip);
        ui->dCurrentRest->setText(dummy.getRestaurantName());
        initializeReceipt();
        displayMenu();
        //qDebug() << distances[indexTrip];
        totDistTraveled += distances.dequeue();
        ui->distIndicator->setText(QString::number(totDistTraveled, 'f', 2));


    }
    else
    {
        finishTrip();
    }

}

void MainWindow::initializeReceipt(){
    ui->defPurchase->clear();
    clearReceipt();
    ui->defPurchase->horizontalHeader()->setVisible(true);

    ui->defPurchase->insertColumn(col);
    ui->defPurchase->setHorizontalHeaderItem(col, new QTableWidgetItem("Item Total"));


    ui->defPurchase->insertColumn(col);
    ui->defPurchase->setHorizontalHeaderItem(col, new QTableWidgetItem("Price"));

    ui->defPurchase->insertColumn(col);
    ui->defPurchase->setHorizontalHeaderItem(col, new QTableWidgetItem("Quantity"));

    ui->defPurchase->insertColumn(col);
    ui->defPurchase->setHorizontalHeaderItem(col, new QTableWidgetItem("Item"));
}

void MainWindow::checkDiabetes(int i){
    //this needs to be refined
    //    switch(i){
    //    case 1:
    //        break;
    //    case 2:
    //        ui->dWarning->setText("You have just accumulated Type 2 Diabetes.\nCONGRATULATIONS!");
    //        ui->dWarning->show();
    //        ui->warningBox->show();
    //        break;
    //    case 3:
    //        ui->dWarning->setText("You're getting fatter, so you need to stop.");
    //        ui->dWarning->show();
    //        ui->warningBox->show();
    //        break;
    //    case 4:
    //        ui->dWarning->setText("Bruh. How are you not dead yet?");
    //        ui->dWarning->show();
    //        ui->warningBox->show();
    //        break;
    //    case 5:
    //        ui->dWarning->setText("HEY FAT BOY! STOP EATING OR YOU'LL START \nRADNOMLY DEFECATING YOURSELF!");
    //        ui->dWarning->show();
    //        ui->warningBox->show();
    //        break;
    //    case 6:
    //        ui->dWarning->setText("You are the chosen one. Trump 4 Pres 2k16");
    //        ui->dWarning->show();
    //        ui->warningBox->show();
    //        break;
    //    default:
    //        ui->dWarning->setText("I'm done with warning your fat arse. \nHope you enjoy your chicken legs. Fatty.");
    //        ui->dWarning->show();
    //        ui->warningBox->show();
    //        break;
    //    }
}




void MainWindow::on_ReturnHome_clicked()
{
    ui->c1SB->setValue(1);
    ui->TripsTab1->removeTab(0);
    ui->TripsTab1->removeTab(0);
    ui->mainTab->removeTab(1);
    indexTrip = 0;
    ui->TripReviewTable->clear();
    ui->restList->clear();
    clearReview();
    ui->c1Label->setText("");
    ui->GT->setText("0.00");
    ui->mainTab->removeTab(ui->mainTab->indexOf(ui->TripsTab));
    ui->mainTab->addTab(ui->HomeTab,"Home");
    nSort.clear();
    temp.clear();
    ui->startTrip->hide();
    ui->c1SB->hide();
    ui->restList->hide();
    ui->restTable->hide();
    ui->c1Label->hide();
    ui->loR->hide();
    ui->start->hide();
    ui->label_9->hide();
    ui->addR->hide();
    //add code to remove previous rows and columns
    namesTemp.clear();
    distances.clear();
    totDistTraveled = 0;


}

void MainWindow::finishTrip()
{
    //qDebug() << distances[indexTrip];
    totDistTraveled += distances.dequeue();
    ui->finalDistIndicator->setText(QString::number(totDistTraveled, 'f', 2));
    ui->TripsTab1->removeTab(0);
    ui->TripsTab1->addTab(ui->TripReview, "Review");


    ui->TripReviewTable->insertColumn(0);
    ui->TripReviewTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));


    ui->TripReviewTable->insertColumn(1);
    ui->TripReviewTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Money Spent"));
    double rev = 0;

    //accumulate total for all rests
    for(int i = 0; i < nSort.size(); i++)
    {
        rev += nSort[i].getTotRev();
    }
    ui->TotSpent->setText(QString::number(rev, 'f', 2));

    //ui->TotSpent->setText(QString::number(ui->GT->text().toDouble(), 'f', 2));

    for(int i = 0; i < nSort.size(); i++)
    {
        ui->TripReviewTable->insertRow(i);
        ui->TripReviewTable->setItem(i, 0, new QTableWidgetItem(nSort[i].getRestaurantName()));
        ui->TripReviewTable->setItem(i, 1, new QTableWidgetItem(QString::number(nSort[i].getTotRev(), 'f', 2)));
    }
    ui->TripReviewTable->resizeColumnsToContents();
    ui->TripReviewTable->horizontalHeader()->setStretchLastSection(true);

}

void MainWindow::clearReview(){
    int currentRows = ui->TripReviewTable->rowCount();
    int currentCol =  ui->TripReviewTable->columnCount();

    for(int rowRemove = 0; rowRemove < currentRows; rowRemove++)
    {
        ui->TripReviewTable->removeRow(0);
    }

    for(int colRemove = 0; colRemove < currentCol; colRemove++)
    {
        ui->TripReviewTable->removeColumn(0);
    }
}

QVector<int> MainWindow::sortR(QVector<Restaurant> restVec, bool trip2){
    //Declare new vector to put the sorted vector into
    QVector<int> efficientOrder;
    //qDebug() << "start of sortR";
    int lowest = 0;
    int lowestDist = 200.00;
    if(!trip2)
    {

        for(int i = 0; i<restVec.size(); i++){
            if(lowestDist > restVec[i].getRestaurantDistanceFS()){
                lowestDist = restVec[i].getRestaurantDistanceFS();
                lowest = i;
            }
        }

    }




    int k;
    for(k = 0; k < restVec.size(); k++){
        if(k == lowest){
            for(int j = 0; j < numRests; j++){
                Restaurant dummy = restVec.at(k);
                Distance dummy2 = dummy.getDistances().at(j);
                efficientOrder.push_back( dummy2.getIndex() );
            }
            break;
        }
    }
    // qDebug() << "returning";
    return efficientOrder;
}

void MainWindow::on_actionAdmin_Login_triggered()   //Login through the toolbar at the top instead of button.
{
    on_loginButton_clicked();
}

//Change by Austin
//More fluid item ordering! Can use the actual menu to select which item you want to order or the combo box.
void MainWindow::on_defMenu_clicked()
{
    QTableWidgetItem *def;
    def = ui->defMenu->item(ui->defMenu->currentRow(), ui->defMenu->currentColumn());

    ui->menuCB->setCurrentText(def->text());
}

//start the default trip
void MainWindow::on_StartDefaultTrip_clicked()
{
    ui->c1SB->hide();
    ui->restList->hide();
    ui->restTable->hide();
    ui->c1Label->hide();
    ui->loR->hide();
    ui->start->hide();
    ui->label_9->hide();
    ui->addR->hide();
    ui->startTrip->show();
    ui->restList->clear();
    tripNum = 1;
}

void MainWindow::on_testTrip_clicked()
{
    ui->c1SB->show();
    ui->c1Label->setText("");
    ui->c1SB->setMaximum(rest.size());
    ui->restList->show();
    ui->restTable->show();
    ui->c1Label->show();
    ui->loR->show();
    ui->start->show();
    ui->label_9->show();
    ui->addR->hide();
    ui->restList->hide();
    ui->restList->reset();
    ui->startTrip->hide();
    tripNum = 2;
}



void MainWindow::on_startTrip_clicked()
{
    if(!isLoggedIn)
    {
        ui->mainTab->removeTab(ui->mainTab->indexOf(ui->HomeTab));
        initializeReceipt();
        QVector<int> toVisit;
        QVector<int > toVisit2;
        QString nameTemp;
        switch(tripNum)
        {
        case 1: //fill up the master list, need to change to use kevals method instead
            for(int i = 0; i < rest.size();i++)
            {
                temp.push_back(rest.at(i));
            }
            toVisit = sortR(temp, false); //pass in the temp list
            nameTemp = db.getRestName(toVisit[0]);
            nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));
            distances.enqueue(nSort[0].getRestaurantDistanceFS());
            distances.enqueue(nSort[0].getDist(toVisit[1]));


            for(int i = 1; i < toVisit.size()-1; i++)
            {
                nameTemp = db.getRestName(toVisit[i]);
                nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));
                distances.enqueue(nSort[i].getDist(toVisit[i+1]));
            }
            nameTemp = db.getRestName(toVisit[toVisit.size()-1]);
            nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));

            distances.enqueue(nSort[toVisit.size()-1].getRestaurantDistanceFS());
            qDebug() << distances;

            //add it at the end
            break;
        case 2:
            // qDebug() << "start of case 2";
            //int numVisit = ui->c1SB->value;
            //numAdd is number to visit
            temp.push_front(getRest(ui->c1Label->text()));
            // nSort.push_front(getRest(ui->c1Label->text()));
            // qDebug() << "Current:" << nSort[0].getRestaurantName();
            // int i = 0;
            toVisit = sortR(temp, true);
            nameTemp = db.getRestName(toVisit[0]);
            nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));
            distances.enqueue(nSort[0].getRestaurantDistanceFS());
            if(numAdd !=1)
            {
                distances.enqueue(nSort[0].getDist(toVisit[1]));
            }


            for(int i = 1; i < numAdd-1; i++)
            {
                nameTemp = db.getRestName(toVisit[i]);
                nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));
                distances.enqueue(nSort[i].getDist(toVisit[i+1]));
            }
            if(numAdd !=1)
            {
                nameTemp = db.getRestName(toVisit[numAdd-1]);
                nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));



            }
            distances.enqueue(nSort[numAdd-1].getRestaurantDistanceFS());


            break;

        case 3:
            toVisit = sortR(temp, false);

            //trim the to visit vector
            for(int i = 0; i < toVisit.size(); i++)
            {
                nameTemp = db.getRestName(toVisit[i]);

                if(nameCheck(nameTemp))
                {
                    toVisit2.push_back(toVisit[i]);
                }
            }

            qDebug() << "here";

            nameTemp = db.getRestName(toVisit2[0]);
            nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));
            distances.enqueue(nSort[0].getRestaurantDistanceFS());
            if(namesTemp.size() != 1)
            {
                distances.enqueue(nSort[0].getDist(toVisit2[1]));
            }



            for(int i = 1; i < toVisit2.size()-1; i++)
            {
                nameTemp = db.getRestName(toVisit2[i]);
                nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));
                distances.enqueue(nSort[i].getDist(toVisit2[i+1]));
            }
            if(namesTemp.size() != 1)
            {
                nameTemp = db.getRestName(toVisit2[toVisit2.size()-1]);
                nSort.push_back(Restaurant(nameTemp,db.getSadDist(nameTemp).toDouble(),distancestoStr(db.getDistances(nameTemp))));
            }


            distances.enqueue(nSort[toVisit2.size()-1].getRestaurantDistanceFS());

            break;
        default:
            //qDebug() << "hi";
            break;
        }

        ui->dCurrentRest->setText(nSort[0].getRestaurantName());
        indexTrip = 0;
        displayMenu();
        //add the trips tab in main tab
        ui->mainTab->addTab(ui->TripsTab, "Trips");
        ui->TripsTab1->addTab(ui->TripTab, "Current Trip");
        ui->mainTab->setCurrentIndex(1);
        indexTrip = 0;
        //qDebug() << distances[indexTrip];
        totDistTraveled += distances.dequeue();
        ui->distIndicator->setText(QString::number(totDistTraveled, 'f', 2));
    }
    else
    {
        QMessageBox::information(this, tr("Invalid!"),
                                 "Please log out first");
    }

}

/*Change by Austin comboBoxDisplayMenuPrototype()
This changes the restaurant and updates menu based on active item in combo box.
Very similiar to displayMenu(), only difference is the string that is passed into getMenuItems
is based on the text in the combo box rather than the vector with an integer from indexTrip.*/
void MainWindow::comboBoxDisplayMenuPrototype()
{
    //    ui->menuCB->clear();
    //    ui->defMenu->clear();
    //    ClearItemTable();
    //    int col = 0;
    //    int row = 0;
    //    ui->defMenu->horizontalHeader()->setVisible(true);

    //    ui->defMenu->insertColumn(col);
    //    ui->defMenu->setHorizontalHeaderItem(col, new QTableWidgetItem("Price"));


    //    ui->defMenu->insertColumn(col);
    //    ui->defMenu->setHorizontalHeaderItem(col, new QTableWidgetItem("Item"));

    //    QVector<QString> currentRestIn = db.getMenuItems(ui->restCombo->currentText());
    //    qDebug() << "Current restuarant" << currentRestIn;
    //    for(int i = 0; i < currentRestIn.length();i++)
    //    {
    //        ui->defMenu->insertRow(row);
    //        ui->defMenu->setItem(row, 0, new QTableWidgetItem(currentRestIn.at(i)));
    //        ui->defMenu->setItem(row, 1, new QTableWidgetItem(db.getItemPrice(ui->restCombo->currentText(),currentRestIn.at(i))));
    //    }
    //    ui->defMenu->resizeColumnsToContents();
    //    ui->defMenu->horizontalHeader()->setStretchLastSection(true);

    //    for(int i = 0; i < currentRestIn.length(); i++ )
    //    {
    //        ui->menuCB->addItem(currentRestIn.at(i));
    //    }
    //    ui->menuCB->setCurrentIndex(0);
    //    ui->dCurrentRest->setText(ui->restCombo->currentText());
}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_c1SB_valueChanged(int arg1)
{
    numAdd = arg1;
}
//add all restaurants based on what user wants
void MainWindow::on_restTable_cellDoubleClicked(int row1, int column1)
{
    Restaurant dummy = rest.at(row1);
    if(tripNum == 2){
        ui->startTrip->show();
        ui->c1Label->setText(dummy.getRestaurantName());
    }
    else{
        ui->startTrip->show();
        bool dup = false;
        for(int i = 0; i < temp.size();i++){
            Restaurant compare = temp.at(i);
            if(compare.getRestaurantName() == dummy.getRestaurantName()){
                dup = true;
            }
        }
        if(dup == true){
            QMessageBox::information(this, tr("Invalid!"),
                                     "Duplicate Restaurant Detected.");
            dup = false;
        }
        else{
            ui->c1Label->setText(dummy.getRestaurantName());
            temp.push_front(dummy);
            namesTemp.push(dummy.getRestaurantName());
            ui->restList->addItem(dummy.getRestaurantName());
        }
    }
}

Restaurant MainWindow::getRest(QString re){
    for(int i = 0; i < rest.size();i++){
        Restaurant dummy = rest.at(i);
        if(dummy.getRestaurantName() == re){
            return dummy;
        }
    }
}
//custom trip 2, pick all and sort
void MainWindow::on_ctPush_clicked()
{
    ui->startTrip->hide();
    ui->c1Label->setText("");
    nSort.clear();
    ui->restList->clear();
    ui->c1Label->hide();
    ui->start->hide();
    ui->c1SB->hide();
    ui->restList->show();
    ui->restTable->show();
    ui->c1Label->show();
    ui->loR->show();
    ui->label_9->hide();
    ui->restList->show();
    ui->addR->show();
    tripNum = 3;
}

int MainWindow::getRestIndex(Restaurant re){
    int index = 0;
    for(int i = 0; i < rest.size();i++){
        Restaurant dummy = rest.at(i);
        if(dummy.getRestaurantName() == re.getRestaurantName()){
            index = i;
        }
    }
    return index;
}

void MainWindow::initcRest(){
    ui->restTable->clear();
    ClearRestTable();
    int col = 0;
    int row = 0;

    QVector<QString> currentRest = db.getRestNames();
    ui->restTable->horizontalHeader()->setVisible(true);

    ui->restTable->insertColumn(col);
    ui->restTable->setHorizontalHeaderItem(col, new QTableWidgetItem("Name"));


    ui->restTable->resizeColumnsToContents();
    ui->restTable->horizontalHeader()->setStretchLastSection(true);
    for(int i = 0; i < currentRest.length();i++)
    {
        ui->restTable->insertRow(row);
        ui->restTable->setItem(row, 0, new QTableWidgetItem(currentRest.at(i)));

    }
    ui->restTable->resizeColumnsToContents();
    ui->restTable->horizontalHeader()->setStretchLastSection(true);
}
bool MainWindow::nameCheck(QString name)
{
    for(int i = 0; i < namesTemp.size(); i++)
    {
        if(namesTemp[i] == name)
        {
            return true;
        }

    }
    return false;
}

