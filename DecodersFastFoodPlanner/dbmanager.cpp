#include "dbmanager.h"
#include<qdebug.h>


dbManager::dbManager()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../Decoders.sqlite");

    if(!db.open())
        qDebug() << "Not connected to DB.";
    else if(db.open())
        qDebug() << "Connected to DB.";
}
void dbManager::nametest()
{

    QSqlQuery query(db);

        query.prepare("SELECT name FROM Restaurant");
        int idName = query.record().indexOf("name");
        if(query.exec())
        {
            while(query.next())
            {
              QString name =query.value(0).toString();
              qDebug() << name;
            }
        }
        else
        {
            qDebug() << query.lastError();
        }

}
