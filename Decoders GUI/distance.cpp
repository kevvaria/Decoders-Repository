#include "distance.h"
/*!
   * \file distance.cpp
   * \brief  Source file for distance class
   *
   * This file contains all of the definition of the distance class
   */

/*******************************
 * CONSTRUCTOR & DECONSTRUCTOR *
 *******************************/
Distance::Distance(){
    index = 0;
    distance = 0.0;
}

Distance::Distance(int in, double dist){
    index = in;
    distance = dist;
}

Distance::~Distance() { }

//setIndex: Updates index for current Distance to a new value
void Distance::setIndex(int in){
    this->index = in;
}

//setDistance: Updates the distance for the current object
void Distance::setDistance(double dist){
    this->distance = dist;
}

//getIndex: Returns the Index for the current object
int Distance::getIndex(){
    return this->index;
}

//getDistance: Returns the distance for the current object
double Distance::getDistance(){
    return distance;
}
