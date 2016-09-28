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
            //qDebug() << name;
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
            double dist = query.value(0).toDouble();
           // qDebug() << dist;
            return QString::number(dist);
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
            double rev = query.value(0).toDouble();
           // qDebug() << rev;
            return QString::number(rev);
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
           // qDebug() << rev;
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
            double price =  query.value(0).toDouble();
           // qDebug() << price;
            return QString::number(price);
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
        QSqlQuery query2(db);
        query2.prepare("SELECT numItems FROM Restaurant WHERE name = (:restName) ");
        query2.bindValue(":restName", restName);
        if(query2.exec())
        {
            if(query2.next())
            {
                int count= query2.value(0).toInt(); //update the item count for the restaurant
                QSqlQuery query3(db);
                query3.prepare("UPDATE Restaurant SET numItems = (:count) WHERE name = (:restName)");
                query3.bindValue(":restName", restName);
                query3.bindValue(":count", (count-1));
                if(query3.exec())
                {
                  //  qDebug() << "should be gone!";

                    return true;
                }
                else
                {
                    qDebug() << query3.lastError();
                }
            }
            else
            {
                qDebug() << "grabbing didn't work, query okay";
            }
        }
        else
        {
            qDebug() << query2.lastError();
        }
    }
    else
    {
        qDebug() << query.lastError();
        return false;
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
        return false;
    }
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

           // qDebug() << "We good";

            QSqlQuery query2(db);
            query2.prepare("SELECT numItems FROM Restaurant WHERE name = (:restName) ");
            query2.bindValue(":restName", restName);
            if(query2.exec())
            {
                if(query2.next())
                {
                    int count= query2.value(0).toInt(); //update the item count for the restaurant
                    QSqlQuery query3(db);
                    query3.prepare("UPDATE Restaurant SET numItems = (:count) WHERE name = (:restName)");
                    query3.bindValue(":restName", restName);
                    query3.bindValue(":count", (count+1));
                    if(query3.exec())
                    {
                       // qDebug() << "Should be updated";
                        return true;
                    }
                    else
                    {
                        qDebug() << query3.lastError();
                    }
                }
                else
                {
                    qDebug() << "grabbing didn't work, query okay";
                }
            }
            else
            {
                qDebug() << query2.lastError();
            }
        }
        else
        {
            qDebug() << query.lastError();
        }
    }
    else
    {
        //do something if the item exists
        return false;

    }

    return false;
}

bool dbManager::addRest(QString restName, double sadDist, QVector<double> distances)
{
    QSqlQuery query(db);
    QString distancesStr = distancesToString(distances);
    query.prepare("INSERT INTO Restaurant (name, dis2Sad, distances) VALUES (:restName, :sadDist, :distStr)");
    query.bindValue(":restName", restName);
    query.bindValue(":sadDist", sadDist);
    query.bindValue(":distStr", distancesStr +" " + "0.0");
    if(query.exec())
    {
        //qDebug() << "should be added";
        updateDistances(distances);
        return true;
    }
    else
    {
        qDebug() << query.lastError();
    }
    return false;

}
QString dbManager::distancesToString(QVector<double> distances)
{
    QString distancesStr="";
    for(int i = 0; i < distances.size(); i++)
    {
        distancesStr += QString::number(distances.at(i) )+ " ";
    }

    return distancesStr.trimmed(); //cut of the ending white space
}

bool dbManager::updateDistances(QVector<double> distances)
{
    QSqlQuery query(db);
    qDebug() << distances.size();
     for(int i = 0; i < distances.size(); i++)
     {
         query.prepare("SELECT distances FROM Restaurant WHERE restId = (:iId)");
         query.bindValue(":iId", i);
         if(query.exec())
         {
             while(query.next())
             {
                QString dist = query.value(0).toString(); //get the current restaurant string
                QSqlQuery query2(db);
              //  qDebug() << dist;
               // qDebug() <<
                query2.prepare("UPDATE Restaurant SET distances = (:distStr) WHERE restId = (:iId)");
                query2.bindValue(":iId", i);
                query2.bindValue(":distStr", (dist + " " + QString::number(distances.at(i))));
                if(query2.exec())
                {

                    //qDebug() << "Updated";
                }
                else
                {
                    qDebug() << query2.lastError();
                    return false;
                }

             }

         }

         else{
             query.lastError();
             return false;
         }
     }

    return true;
}

QString dbManager::getRestName(int id)
{
    QSqlQuery query(db);
    query.prepare("SELECT name FROM Restaurant WHERE restId = (:id)");
    if(query.exec())
    {
        if(query.next())
        {
            QString name = query.value(0).toString();
            return name;
        }


    }
    return "error";
}
