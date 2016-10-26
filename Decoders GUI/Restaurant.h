/******************************************************************************
 * Name: Keval Varia
 * Team: The Decoders
 ******************************************************************************/
/*!
   * \file Restaurant.h
   * \brief  Header for Restaurant class
   *
   * This file contains all of the declarations and slots of the Restaurant class
   */
#ifndef RESTAURANT_H_
#define RESTAURANT_H_
#include <iostream>
#include <QVector>
#include "string"
#include "distance.h"
using namespace std;
/*!
 * \brief The Restaurant class
 *
 * This class represents a restaurant, it contains the same data fields as the database, except rest id
 * The revenue here is per trip and not lifetime
 */
class Restaurant {
private:
    //Varibles

    QString name;                       //Restaurant Name

    double distancefromSad;				//Restaurant Distance

    QVector<Distance> distances;        //Distance compared to other restaurants

    int restaurantCount;                //Number of restaurants

    double totRev;                      //Total distance travelled

    int menItems;

public:
    //Constructor and Deconstructor

    /*!
     * \brief Restaurant
     *
     * Constructor
     */
    Restaurant();

    /*!
     * \brief Restaurant
     *
     * non-default constructor
     * \param name
     * \param distanceFS
     * \param dis
     */
    Restaurant(QString name, double distanceFS, QVector<Distance>dis);

    virtual ~Restaurant();


    //Accessors and Mutators



    /*!
     * \brief updateRev
     *
     * Updates the restaurants total value
     * \param value
     */
    void updateRev(double value);

    /*!
     * \brief getRestaurantName
     *
     * Gets the restaurant name
     * \return restarant name
     */
    QString getRestaurantName();

    /*!
     * \brief getRestaurantDistanceFS
     *
     * Gets the distance to saddleback
     * \return distance to saddleback
     */

    double getRestaurantDistanceFS();

    /*!
     * \brief getDistances
     *
     * Gets the vector of distance objects
     * \return distance objects
     */
    QVector<Distance> getDistances();


    /*!
     * \brief getTotRev
     *
     * Gets the total revenue
     * \return total revenue
     */
    double getTotRev();

    /*!
     * \brief getDist
     *
     * gets the distance another restaurant
     * \param i
     * \return distance to another restaurant
     */
    double getDist(int i);
    /*!
     * \brief quanItems
     *
     * updates the number of items bought
     * \param i
     * \return updated value
     */
    int quanItems(int i);

    /*!
    * \brief getItems
    *
    * returns the number of items bought
    * \return number of items bought
    */
   int getItems();
};


#endif /* RESTAURANT_H_ */
