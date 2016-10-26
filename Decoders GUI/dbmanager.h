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
 * Manages the sqlite data base that contians restaurants and their menu items
 */
class dbManager
{
public:
    /*!
     * \brief dbManager
     *
     * Constructor
     */
    dbManager();

    //get all names for rest
    /*!
     * \brief getRestNames
     *
     * Gets all restaurant names and puts them in a QVector
     * \return QVector of restaurant names
     */
    QVector<QString> getRestNames();
    //utility methods to retrieve other attributes
    /*!
     * \brief getSadDist
     *
     * Gets the specified restaurants distance to saddleback
     * \param restName
     * \return the restaurants distance to saddleback
     */
    QString getSadDist(QString restName);
    /*!
     * \brief getRev
     *
     * Gets the total revenue for the specified restaurant
     * \param restName
     * \return total lifetime revenue of a restaurant
     */
    QString getRev(QString restName);
    /*!
     * \brief getNumItems
     *
     * Returns the number of menu items a restaurant has
     * \param restName
     * \return number of items on the menu
     */
    QString getNumItems(QString restName);


    /*!
     * \brief getItemPrice
     *
     * Returns the price of a certain item
     * \param restName
     * \param itemName
     * \return item price
     */
    QString getItemPrice(QString restName, QString itemName);

    /*!
     * \brief getMenuItems
     *
     * Returns the names of all menu items for a restaurant
     * \param restName
     * \return menu item names
     */
    QVector<QString> getMenuItems(QString restName);
    /*!
     * \brief Exists
     *
     * checks if a menu item exists
     * \param restName
     * \param itemName
     * \return t/f if the item exists
     */
    bool Exists(QString restName, QString itemName);
    /*!
     * \brief removeItem
     *
     * Removes a menu item
     * \param restName
     * \param itemName
     * \return t/f result of the operation
     */
    bool removeItem(QString restName, QString itemName);
    /*!
     * \brief updateItem
     *
     * Updates a menu item's price
     * \param restName
     * \param itemName
     * \param price
     * \return t/f result of the operation
     */
    bool updateItem(QString restName, QString itemName, double price);

    /*!
     * \brief addItem
     *
     * Adds a new menu item
     * \param restName
     * \param itemName
     * \return t/f result of the operation
     */
    bool addItem(QString restName, QString itemName, double price);



    /*!
     * \brief addRest
     *
     * Adds a new restaurant
     * \param restName
     * \param sadDist
     * \param distances
     * \return t/f result of the operation
     */
    bool addRest(QString restName, double sadDist, QVector<double> distances);



    /*!
     * \brief getRestName
     *
     * Gets a restaurant name based on id
     * \param id
     * \return restaurant name
     */
    QString getRestName(int id);


    /*!
     * \brief updateDistances
     *
     * Updates distances of previous restaurants when adding a new restaurant
     * \param distances
     * \return t/f result of the operation
     */
    bool updateDistances(QVector<double> distances); //updates the previous restaurnts
    /*!
     * \brief distancesToString
     *
     * Parses a QVector of doubles into a single string for storage in the database
     * \param distances
     * \return QString of distances
     */
    QString distancesToString(QVector<double> distances); //converts the distances to a string to store in the db



    /*!
     * \brief getDistances
     *
     * Gets the distances to other restaurants for a restaurant
     * \param restName
     * \return distances in string form
     */
    QString getDistances(QString restName);
    /*!
     * \brief updateTotRev
     *
     * Accumulates the total revenue for a restaurant
     * \param restName
     * \param value
     * \return t/f result of the operation
     */
    bool updateTotRev(QString restName, double value);



private:
    QSqlDatabase db; //the database

};

#endif // DBMANAGER_H
