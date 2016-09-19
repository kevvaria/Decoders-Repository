#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QApplication>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <qarraydata.h>
//#include "user.h"
#include <QVector>

class dbManager
{
public:
    dbManager();


    void nametest();


private:
    QSqlDatabase db; //the database
};

#endif // DBMANAGER_H
