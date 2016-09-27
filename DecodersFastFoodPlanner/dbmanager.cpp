#include "dbmanager.h"
#include<qdebug.h>
/*!
   * \file dbmanager.cpp
   * \brief  Source file for dbmanager database wrapper class methods
   *
   * This file contains all of the definitions of the dbmanager database wrapper class
   */


dbManager::dbManager()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../Database/Decoders.sqlite");

    if(!db.open())
        qDebug() << "Not connected to DB.";
    else if(db.open())
        qDebug() << "Connected to DB.";
}
QVector<QString> dbManager:: getRestNames()
{

    QSqlQuery query(db);
    QVector<QString> names;

    query.prepare("SELECT name FROM Restaurant");
    if(query.exec())
    {
        while(query.next()) //these seem to be coming out in alphabetical order by default
        {
            QString name =query.value(0).toString();
            qDebug() << name;
            names.push_back(name);
        }
    }
    else
    {
        qDebug() << query.lastError();
    }
    return names;

}

QString dbManager::getSadDist(QString restName)
{
    QSqlQuery query(db);
    //QString dist;
    query.prepare("SELECT Dis2Sad FROM Restaurant WHERE name = (:restName)");
    query.bindValue(":restName", restName);
    if(query.exec())
    {
        if(query.next())
        {
            QString dist = query.value(0).toString();
            qDebug() << dist;
            return dist;
        }
        else
        {
            return "Error";
        }
    }
    else
    {
        qDebug() << query.lastError();
        return "NO restaurant found";
    }
}
QString dbManager::getRev(QString restName)
{
    QSqlQuery query(db);

    query.prepare("SELECT totRev FROM Restaurant WHERE name = (:restName)");
    query.bindValue(":restName", restName);
    if(query.exec())
    {
        if(query.next())
        {
            QString rev = query.value(0).toString();
            qDebug() << rev;
            return rev;
        }
        else
        {
            return "Error";
        }

    }
    else
    {
        qDebug() << query.lastError();
        return "NO restaurant found";
    }
}


QString dbManager::getNumItems(QString restName)
{
    QSqlQuery query(db);

    query.prepare("SELECT numItems FROM Restaurant WHERE name = (:restName)");
    query.bindValue(":restName", restName);
    if(query.exec())
    {
        if(query.next())
        {
            QString rev = query.value(0).toString();
            qDebug() << rev;
            return rev;
        }
        else
        {
            return "Error";
        }

    }
    else
    {
        qDebug() << query.lastError();
        return "NO restaurant found";
    }
}

QVector<QString> dbManager:: getMenuItems(QString restName)
{

    QSqlQuery query(db);
    QVector<QString> names;

    query.prepare("SELECT Name FROM MenuItems WHERE Owner = (:restName)");
    query.bindValue(":restName", restName );

    if(query.exec())
    {

        while(query.next()) //these seem to be coming out in alphabetical order by default
        {

            QString name =query.value(0).toString();
            qDebug() << name;
            names.push_back(name);
        }
    }
    else
    {
        qDebug() << query.lastError();
    }
    return names;

}
QString dbManager::getItemPrice(QString restName, QString itemName)
{
     QSqlQuery query(db);

     query.prepare("SELECT Price FROM MenuItems WHERE Owner = (:restName) AND Name = (:itemName)");
     query.bindValue(":restName", restName);
     query.bindValue(":itemName", itemName);

     if(query.exec())
     {
         if(query.next())
         {
           QString price =  query.value(0).toString();
            qDebug() << price;
            return price;
         }
     }
     else
     {
         qDebug() << query.lastError();
     }
     return "price" ;
}
bool dbManager::Exists(QString restName, QString itemName)
{
    QSqlQuery query(db);

    query.prepare("SELECT * FROM MenuItems WHERE Owner = (:restName) AND Name = (:itemName)");
    query.bindValue(":restName", restName);
    query.bindValue(":itemName", itemName);
    if(query.exec())
    {
        if(query.next())
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        qDebug() << query.lastError();
        return false;
    }
}
bool dbManager::removeItem(QString restName, QString itemName)
{
     QSqlQuery query(db);
     query.prepare("DELETE FROM MenuItems WHERE Owner = (:restName) AND Name = (:itemName)");
     query.bindValue(":restName", restName);
     query.bindValue(":itemName", itemName);
     if(query.exec())
     {
        qDebug() << "should be gone!";
        return true;
     }
     else
     {
        qDebug() << query.lastError();
        return false;
     }
}
bool dbManager::addRest()
{
    //for(int i = 1; i < db.)
}
int dbManager::getRestCount()
{
    QSqlQuery query(db);
    query.prepare("SELECT COUNT(*) FROM Restaurant");
    if(query.exec())
    {

        if(query.next())
            return query.value(0).toInt();
        else
            return -1;
    }
    else
    {
        qDebug() << query.lastError();
        return -1;
    }
}

bool dbManager::updateItem(QString restName, QString itemName, double price)
{
    QSqlQuery query(db);
    if(Exists(restName, itemName))
    {
        query.prepare("UPDATE MenuItems SET Price = (:price) WHERE Owner = (:restName) AND Name = (:itemName)");
        query.bindValue(":restName", restName);
        query.bindValue(":itemName", itemName);
        query.bindValue(":price", price);
        if(query.exec())
        {
            qDebug() << "Updated";
            return true;
        }
        else
        {
            qDebug() << query.lastError();
        }
    }
    return false;
}



bool dbManager::addItem(QString restName, QString itemName, double price)
{

    QSqlQuery query(db);
    if(!Exists(restName, itemName))
    {
        query.prepare("INSERT INTO MenuItems (Owner, Name, Price) VALUES (:restName, :itemName, :price)");
        query.bindValue(":restName", restName);
        query.bindValue(":itemName", itemName);
        query.bindValue(":price", price);
        if(query.exec())
        {

            qDebug() << "We good";
            return true;
        }
        else
        {
            qDebug() << query.lastError();
        }
    }
    else
    {
        //do something if the item exists

    }

    return false;
}


