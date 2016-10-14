#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    indexTrip = 0;
    ui->setupUi(this);
    ui->diabetes->setValue(0);
    ui->warningBox->hide();
    ui->dWarning->hide();
    ui->dlvl->setText("1");
    updateRestTable();
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

  Restaurant dummy = rest.at(indexTrip);
    ui->dCurrentRest->setText(dummy.getRestaurantName());
    initializeReceipt();
    displayMenu();
    indexTrip = 0;
    row =0;
    col = 0;
    displayMenu();
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
    //qDebug() << db.updateDistances(distances );

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
    //    ui->defRestTable->horizontalHeader()->setVisible(true);
    //    ui->defRestTable->horizontalHeader()->setVisible(true);

    //    ui->defRestTable->insertColumn(col);
    //    ui->defRestTable->setHorizontalHeaderItem(col, new QTableWidgetItem("Name"));

    //    ui->defTripTable->insertColumn(col);
    //    ui->defTripTable->setHorizontalHeaderItem(col, new QTableWidgetItem("Name"));

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
        //        ui->defRestTable->insertRow(row);
        //        ui->defTripTable->insertRow(row);
        ui->AdminRestView->setItem(row, 0, new QTableWidgetItem(currentRest.at(i)));
        //        ui->defRestTable->setItem(row, 0, new QTableWidgetItem(currentRest.at(i)));
        //        ui->defTripTable->setItem(row, 0, new QTableWidgetItem(currentRest.at(i)));

        ui->AdminRestView->setItem(row, 1, new QTableWidgetItem(db.getSadDist(currentRest.at(i))));
        ui->AdminRestView->setItem(row, 2, new QTableWidgetItem(db.getRev(currentRest.at(i))));
        ui->AdminRestView->setItem(row, 3, new QTableWidgetItem(db.getNumItems(currentRest.at(i))));
    }
    ui->AdminRestView->resizeColumnsToContents();
    ui->AdminRestView->horizontalHeader()->setStretchLastSection(true);
    //    ui->defRestTable->resizeColumnsToContents();
    //    ui->defRestTable->horizontalHeader()->setStretchLastSection(true);
    //    ui->defTripTable->resizeColumnsToContents();
    //    ui->defTripTable->horizontalHeader()->setStretchLastSection(true);



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

QVector<double> MainWindow::distancestoStr(QString dist)
{

    /*
     *     QVector<double> distDoubles;
    QString dist = db.getDistances("Chipotle"); //get the distances for specified rest
    //qDebug() << dist;
    distDoubles= distancestoStr(dist);  //parse the distances string out, then assign it to the object, qvector has the = operator overloaded
    qDebug() << distDoubles;

     */

    QVector<double> distDoubles;
    QStringList list = dist.split(' ');

    //qDebug() << list;

    for(int i = 0; i < list.size(); i++)
    {
        QString temp= list.at(i);
        distDoubles.push_back(temp.toDouble());
    }


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
                isLoggedIn = true;
                ui->mainTab->addTab(ui->AdminTab, "Admin");
                ui->loginButton->setText("LogOut");
                updateItemTable();
                ui->mainTab->setCurrentIndex(1);
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
                ui->loginButton->setText("Administrative Login");

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
    qDebug() << currentRestIn;

    for(int i = 0; i < currentRestIn.length();i++)
    {
        ui->defMenu->insertRow(row);
        ui->defMenu->setItem(row, 0, new QTableWidgetItem(currentRestIn.at(i)));
        ui->defMenu->setItem(row, 1, new QTableWidgetItem(db.getItemPrice(ui->dCurrentRest->text(),currentRestIn.at(i))));
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
    qDebug() << itemPrice;
    double quan = (arg1 * itemPrice);
    qDebug() << quan;
    QString purchaseT = QString::number(quan);
    qDebug() << purchaseT;
    ui->PT->setText(purchaseT);
}

void MainWindow::initializeRest(){
    for(int i = 0; i < numRests;i++){
        rest.push_back(Restaurant(db.getRestName(i),db.getSadDist(db.getRestName(i)).toDouble(),distancestoStr(db.getDistances(db.getRestName(i)))));
        Restaurant dum = rest.at(i);
        qDebug() << dum.getRestaurantName();
    }
}

void MainWindow::on_menuCB_currentIndexChanged(const QString &arg1)
{
    ui->quantityPurchase->setValue(0);
    ui->PT->setText("0");
}
//buy item on a trip
void MainWindow::on_pushButton_2_clicked()
{

    if(ui->quantityPurchase->value() !=0)
    {
        double cur = ui->CR->text().toDouble() + updateReceipt(row, col);
        ui->CR->setText(QString::number(cur));
        //need to add total rev for this rest
        //same for the db
        rest[indexTrip].updateRev(ui->PT->text().toDouble());
        db.updateTotRev(ui->dCurrentRest->text(), ui->PT->text().toDouble());
        spentInTrip += ui->PT->text().toDouble();
        qDebug() << spentInTrip;
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
    ui->defPurchase->setItem(row, 2, new QTableWidgetItem(QString::number(itemPrice)));
    ui->defPurchase->setItem(row, 3, new QTableWidgetItem(ui->PT->text()));

    ui->defPurchase->resizeColumnsToContents();
    ui->defPurchase->horizontalHeader()->setStretchLastSection(true);
    return ui->PT->text().toDouble();
}



bool MainWindow::on_nextRest_toggled(bool checked)
{
    double cur = ui->GT->text().toDouble() + ui->CR->text().toDouble();
    ui->GT->setText(QString::number(cur));
    indexTrip++;
    qDebug() << ui->nextRest->isChecked();
    return ui->nextRest->isChecked();
}

void MainWindow::on_nextRest_clicked()
{
    double cur = ui->GT->text().toDouble() + ui->CR->text().toDouble();
    ui->GT->setText(QString::number(cur));
    indexTrip++;
    if(indexTrip < rest.size()){
        if(ui->diabetes->value() < 100){
            double every5 = ui->CR->text().toDouble()/5;
            qDebug() << "every5: " << every5;
            if(every5 > 100){
                ui->dlvl->setText(QString::number((int)(every5/100) + ui->dlvl->text().toInt()));
                if(((int)every5 % 100) + (double)ui->diabetes->value() > 100){
                        ui->diabetes->setValue((((int)every5%100) + ui->diabetes->value()) - 100);
                }
                else{
                    ui->diabetes->setValue(((int)every5%100) + ui->diabetes->value());
                }
            }
            else{
                if((((int)every5%100) + ui->diabetes->value()) > 100){
                   ui->dlvl->setText(QString::number(((int)every5%100+ ui->diabetes->value() - 100) + ui->dlvl->text().toInt()));
                   ui->diabetes->setValue(((int)every5%100) + ui->diabetes->value() - 100);
                }
                else{
                    ui->diabetes->setValue(((int)every5%100) + ui->diabetes->value());
                }

            }
            every5 = 0;

        }
        checkDiabetes(ui->dlvl->text().toInt());
        ui->quantityPurchase->setValue(0);
        ui->PT->setText("0");
        ui->CR->setText("0");
        ui->menuCB->clear();
        Restaurant dummy = rest.at(indexTrip);
        ui->dCurrentRest->setText(dummy.getRestaurantName());
        initializeReceipt();
        displayMenu();
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

void MainWindow::on_warningBox_accepted()
{
    ui->warningBox->hide();
    ui->dWarning->hide();
}

void MainWindow::on_warningBox_rejected()
{
    ui->warningBox->hide();
    ui->dWarning->hide();
}


//start the default trip
void MainWindow::on_StartDefaultTrip_clicked()
{
    ui->dCurrentRest->setText(rest[0].getRestaurantName());
   indexTrip = 0;
   //ui->defMenu->clear();
   displayMenu();
   //add the trips tab in main tab
   ui->mainTab->addTab(ui->TripsTab, "Trips");

   ui->TripsTab1->addTab(ui->TripTab, "Current Trip");
    ui->mainTab->setCurrentIndex(1);
    ui->quantityPurchase->setValue(1);
    //indexTrip = 0;
}

void MainWindow::on_ReturnHome_clicked()
{
    ui->TripsTab1->removeTab(0);
    ui->TripsTab1->removeTab(0);
    ui->mainTab->removeTab(1);
    indexTrip = 0;
    ui->TripReviewTable->clear();
    //add code to remove previous rows and columns

}

void MainWindow::finishTrip()
{
    ui->TripsTab1->removeTab(0);
    ui->TripsTab1->addTab(ui->TripReview, "Review");


    ui->TripReviewTable->insertColumn(0);
    ui->TripReviewTable->setHorizontalHeaderItem(0, new QTableWidgetItem("Name"));


    ui->TripReviewTable->insertColumn(1);
    ui->TripReviewTable->setHorizontalHeaderItem(1, new QTableWidgetItem("Money Spent"));
    ui->TotSpent->setText(QString::number(spentInTrip));

    for(int i = 0; i < rest.size(); i++)
    {
        ui->TripReviewTable->insertRow(i);
        ui->TripReviewTable->setItem(i, 0, new QTableWidgetItem(rest[i].getRestaurantName()));
        ui->TripReviewTable->setItem(i, 1, new QTableWidgetItem(QString::number(rest[i].getTotRev())));
    }

}
