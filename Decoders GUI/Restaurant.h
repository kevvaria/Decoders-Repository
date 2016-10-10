/******************************************************************************
 * Name: Keval Varia
 * Team: The Decoders
 ******************************************************************************/
#ifndef RESTAURANT_H_
#define RESTAURANT_H_
#include <iostream>
#include <QVector>
#include "string"
using namespace std;

class Restaurant {
private:
	//Varibles
    QString name;					//Restaurant Name
    double distancefromSad;				//Restaurant Distance
	struct Menu{
		string itemName;			//Menu Item Name
		double itemPrice;			//Price for the menu item
		Menu *next;					//pointer to the next menu item
	};
    QVector<double> distances;
	Menu *head;						//Pointer to the first item in the list
	Menu *tail;
	int restaurantCount;			//Number of restaurants
	int menuItemCount;				//Number of Items in current menu
    double totRev;		//Total distance travelled

public:
	//Constructor and Deconstructor
	Restaurant();
    Restaurant(QString name, double distanceFS,QVector<double>dis);
	virtual ~Restaurant();

	//Accessors and Mutators
    void RelocateRestaurant(QString name, double distance);
    void AddMenuItem(QString nameItem, double priceItem);
    void RemoveMenuItem(QString removeName);
    void ChangeItemPrice(QString nameItem, double price);
	bool isMenuFull();
	void UpdateMilesTravelled(double milesTravelled);

    void updateRev(double value);

    QString getRestaurantName();
    double getRestaurantDistanceFS();
	double getTotalDistanceTravelled();
    QVector<double> getDistances();
    double getTotRev();

	void Print();
};


#endif /* RESTAURANT_H_ */
