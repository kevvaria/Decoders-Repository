#include "Restaurant.h"
//Constructor
Restaurant :: Restaurant(){
	//Initialize values to nill
	name = "";
    distancefromSad = distanceTravelled = 0.0;
	head = tail = NULL;
	restaurantCount = menuItemCount = 0;
}

//Constructor
Restaurant :: Restaurant(QString rName, double dist,QVector<double> dis){
	//Update values to given names and distances
	name = rName;
    distancefromSad = dist;
	distanceTravelled = dist;
	restaurantCount = 1;
	menuItemCount = 0;
	head = tail = NULL;
    for(int i = 0; i < dis.size();i++){
    distances.push_back(dis.at(i));
    }
}

//Deconstructor
Restaurant :: ~Restaurant(){}

//RelocateRestaurant: Change name and distance for the restaurant
//void Restaurant :: RelocateRestaurant(QString rName, double dist){
//	name = rName;
//    distancefromSad += dist;
//	restaurantCount++;
//}

//AddMenuItems: Add an item to the menu || Name and Price
//void Restaurant :: AddMenuItem(QString nameItem, double priceItem){
//	if(isMenuFull()){								//Check if menu is full
//		cout << "Menu is full!\n";
//		cout << " cannot add " << nameItem << " to menu!\n\n";
//	}
//	else{											//If it's not full
//		Menu *ptr;
//		ptr = new Menu;						//Create space in menu for item
//		ptr->itemName = nameItem;			//Assign name for item in memory
//		ptr->itemPrice = priceItem;			//Assign price for item in memory
//		if(head == NULL){					//If the menu is empty
//			head = ptr;						//Place item in first position
//			tail = ptr;
//			menuItemCount++;				//Update number of items in menu
//		}
//		else{
//			tail->next = ptr;				//If list is not empty
//			tail = ptr;						//Add to the back
//			menuItemCount++;				//Update number of items in menu
//		}
//		ptr = NULL;							//Free the pointer
//	}
//}

//RemoveMenuItem: Remove an Item from the menu
//void Restaurant :: RemoveMenuItem(QString removeName){

//	if(head == NULL)							//Check if menu is empty
//		cout << "ERROR! Cannot Remove from empty menu!\n\n";

//	else if(head->next == NULL){				//Check if there is only one item
//		if(head->itemName == removeName){		//Check if that is the item
//			delete head;						//If so then delete from menu
//			head = NULL;						//Free the pointer
//			menuItemCount = 0;					//Number of items left = 0
//		}
//		else									//else if it's not what we searched for
//			cout << "Item not found!\n\n";		//Then inform user
//	}

//	else{										//When there's more than one item in menu
//		//Variable Declaration
//		Menu *ptr;								//Points at item to be deleted
//		Menu *rptr;								//Points at item before item to be deleted
//		bool found = false;						//Flag to see if searched item exists

//		//Variable Definition
//		ptr = head;
//		rptr = head;

//		while(ptr != tail->next){				//Run through menu to search for item
//			if(ptr->itemName == removeName){	//If item is found
//				found = true;					//Flag it.
//				break;							//Exit the loop
//			}
//			else{								//if not then let
//				rptr = ptr;						//pointer point to current item
//				ptr = ptr->next;				//pointer point to next item
//			}									//repeat till menu ends or item is found
//		}
//		if(found){								//If item is found
//			rptr->next = ptr->next;				//Patch the previuos and next items
//			delete ptr;							//Delete current item
//			ptr = NULL;							//Free the pointer
//			menuItemCount--;					//Decrease number of items in menu
//		}
//		else
//			cout << "Item not found!\n\n";		// else no item was found in menu
//	}
//}

//Change Item Price
//void Restaurant :: ChangeItemPrice(QString changename, double newPrice){

//	//Variable declaration
//	Menu *ptr;
//	ptr = head;

//	while(ptr->itemName != changename){			//Search for item data
//		ptr = ptr->next;
//	}
//	if(ptr == NULL)								//If list ended
//		cout << "Item not found !";				//Then item does not exist
//	else										//else
//		ptr->itemPrice = newPrice;				//Update the price at given location
//}

//IsMenuFull: Check if the menu is full i.e. has 8 items
//bool Restaurant :: isMenuFull(){
//	if(menuItemCount >= 8)						//If number of items >= 8
//		return true;							//Then menu should be full
//	return false;								//else there's space
//}

//UpdateMilesTravelled: Update the total number of miles
void Restaurant :: UpdateMilesTravelled(double milesTravelled){
	distanceTravelled += milesTravelled;		//Add trip distance to restaurant distance
}

//getRestaurantName: Returns the name of the restaurant
QString Restaurant :: getRestaurantName(){
    return name;
}

//getRestaurantDistance: Returns the distance b/w Saddleback College and Restaurant
double Restaurant :: getRestaurantDistanceFS(){
    return this->distancefromSad;
}

//getTotalDistanceTravelled: Returns the total distance travelled in this trip
double Restaurant :: getTotalDistanceTravelled(){
	return this->distanceTravelled;
}

//Print: Prints the name, distance, menu items, and total distance tavelled
//void Restaurant :: Print(){

//	cout << "Restaurant Details\n";
//	cout << "Name: " << getRestaurantName() << endl;
//	cout << "Distance: " << getRestaurantDistance() << endl;
//	cout << endl;

//	Menu *ptr;
//	ptr = head;

//	cout << "Price   Name" << endl;
//	while(ptr != NULL){
//		cout << "$" << ptr->itemPrice << "  " << ptr->itemName << endl;
//		ptr = ptr->next;
//	}
//	cout << "\nNumber of Items in Menu: " << this->menuItemCount;
//	cout << "\nTotal Distance Travelled: " << getTotalDistanceTravelled() << endl;

//}

QVector<double> Restaurant::getDistances(){
    return distances;
}
