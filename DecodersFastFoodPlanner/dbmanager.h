#ifndef DBMANAGER_H
#define DBMANAGER_H

#include <QApplication>
#include <QtSql>
#include <QtDebug>
#include <QFileInfo>
#include <qarraydata.h>

#include <QVector>
#include<qvector.h>

/*!
   * \file dbmanager.h
   * \brief  Header for database wrapper class
   *
   * This file contains all of the declarations of the dbmanager class
   */


/*!
 * \brief The dbManager class
 *
 * Manages the sqlite data base
 */
class dbManager
{
public:
    /*!
     * \brief dbManager
     */
    dbManager();

    //get all names for rest
    /*!
     * \brief gets all restaurant names
     * \return QVector of all rest names
     */
    QVector<QString> getRestNames();
    //utility methods to retrieve other attributes
    /*!
     * \brief gets distance b/t the restaurant and saddleback
     * \param restName
     * \return
     */
    QString getSadDist(QString restName);
    /*!
     * \brief getRev
     * \param restName
     * \return
     */
    QString getRev(QString restName);
    /*!
     * \brief getNumItems
     * \param restName
     * \return
     */
    QString getNumItems(QString restName);


    /*!
     * \brief getItemPrice
     * \param restName
     * \param itemName
     * \return
     */
    QString getItemPrice(QString restName, QString itemName);

    /*!
     * \brief getMenuItems
     * \param restName
     * \return
     */
    QVector<QString> getMenuItems(QString restName);
    /*!
     * \brief Exists
     * \param restName
     * \param itemName
     * \return
     */
    bool Exists(QString restName, QString itemName);
    /*!
     * \brief removeItem
     * \param restName
     * \param itemName
     * \return
     */
    bool removeItem(QString restName, QString itemName);
    bool updateItem(QString restName, QString itemName, double price);


    //test function, not complete
    bool addRest();

    /*!
     * \brief getRestCount
     * \return Number of restuarants the db
     */
    int getRestCount();



private:
    QSqlDatabase db; //the database

};

#endif // DBMANAGER_H
