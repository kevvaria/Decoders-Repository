/******************************************************************************
 * Name: Keval Varia
 * Team: The Decoders
 ******************************************************************************/
#ifndef RESTAURANT_H_
#define RESTAURANT_H_
#include <iostream>
#include "string"
using namespace std;

class Restaurant {
private:
	//Varibles
	string name;					//Restaurant Name
	double distance;				//Restaurant Distance
	struct Menu{
		string itemName;			//Menu Item Name
		double itemPrice;			//Price for the menu item
		Menu *next;					//pointer to the next menu item
	};
	Menu *head;						//Pointer to the first item in the list
	Menu *tail;
	int restaurantCount;			//Number of restaurants
	int menuItemCount;				//Number of Items in current menu
	double distanceTravelled;		//Total distance travelled

public:
	//Constructor and Deconstructor
	Restaurant();
	Restaurant(string name, double distance);
	virtual ~Restaurant();

	//Accessors and Mutators
	void RelocateRestaurant(string name, double distance);
	void AddMenuItem(string nameItem, double priceItem);
	void RemoveMenuItem(string removeName);
	void ChangeItemPrice(string nameItem, double price);
	bool isMenuFull();
	void UpdateMilesTravelled(double milesTravelled);

	string getRestaurantName();
	double getRestaurantDistance();
	double getTotalDistanceTravelled();

	void Print();
};


#endif /* RESTAURANT_H_ */
