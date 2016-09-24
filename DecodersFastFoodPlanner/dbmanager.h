#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QApplication>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <qarraydata.h>

#include <QVector>
#include<qvector.h>

class dbManager
{
public:
    dbManager();

    /*!
     * \brief getRestNames
     * \return
     */
    QVector<QString> getRestNames();




    QVector<QString> getMenuItems(QString restName);



private:
    QSqlDatabase db; //the database
};

#endif // DBMANAGER_H
