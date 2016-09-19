#include "dbmanager.h"
#include<qdebug.h>


dbManager::dbManager()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("Decoders");

    if(!db.open())
        qDebug() << "Not connected to DB.";
    else if(db.open())
        qDebug() << "Connected to DB.";
}
void dbManager::nametest()
{

    QSqlQuery query;


        query.prepare("SELECT Name FROM Restaurant");
        int idName = query.record().indexOf("Name");
        if(query.exec())
        {
            while(query.next())
            {
              QString name =query.value(idName).toString();
              qDebug() << name;
            }
        }
        else
        {
            qDebug() << query.lastError();
        }

}
