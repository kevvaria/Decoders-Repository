#include "dbmanager.h"
#include<qdebug.h>



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
    int idName = query.record().indexOf("name");
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

}
