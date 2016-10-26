#include "Restaurant.h"

//Constructor
Restaurant :: Restaurant(){
	//Initialize values to nill
	name = "";
    distancefromSad = 0.0;
    restaurantCount = 0;
    totRev = 0;
}

//Constructor
Restaurant :: Restaurant(QString rName, double dist,QVector<Distance> dis){
	//Update values to given names and distances
	name = rName;
    distancefromSad = dist;
	restaurantCount = 1;
    totRev = 0;
    for(int i = 0; i < dis.size();i++){
        distances.push_back(dis.at(i));
    }
}

//Deconstructor
Restaurant :: ~Restaurant(){}

//getRestaurantName: Returns the name of the restaurant
QString Restaurant :: getRestaurantName(){
    return name;
}

//getRestaurantDistance: Returns the distance b/w Saddleback College and Restaurant
double Restaurant :: getRestaurantDistanceFS(){
    return this->distancefromSad;
}

QVector<Distance> Restaurant::getDistances(){
    return distances;
}

void Restaurant::updateRev(double value){
    totRev += value;
}

double Restaurant::getTotRev(){
    return totRev;
}

double Restaurant::getDist(int i)
{
    //unsort the vector of distances
    qSort(distances.begin(), distances.end(), DistSort2());

    double toReturn = distances[i].getDistance();
    //resort

     qSort(distances.begin(), distances.end(), DistSort());

     return toReturn;
}
