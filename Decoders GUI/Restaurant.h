/******************************************************************************
 * Name: Keval Varia
 * Team: The Decoders
 ******************************************************************************/
#ifndef RESTAURANT_H_
#define RESTAURANT_H_
#include <iostream>
#include <QVector>
#include "string"
#include "distance.h"
using namespace std;

class Restaurant {
private:
	//Varibles

    QString name;                       //Restaurant Name

    double distancefromSad;				//Restaurant Distance

    QVector<Distance> distances;        //Distance compared to other restaurants

    int restaurantCount;                //Number of restaurants

    double totRev;                      //Total distance travelled

public:
	//Constructor and Deconstructor
	Restaurant();

    Restaurant(QString name, double distanceFS, QVector<Distance>dis);

    virtual ~Restaurant();


    //Accessors and Mutators

    void UpdateMilesTravelled(double milesTravelled);

    void updateRev(double value);

    QString getRestaurantName();

    double getRestaurantDistanceFS();

    QVector<Distance> getDistances();

    double getTotRev();
    double getDist(int i);

};


#endif /* RESTAURANT_H_ */
