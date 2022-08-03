#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;

class Car : public Vehicle
{
	int numberOfDoors;

public:

	Car();
	Car(string i, int j, int x);

	int getNumberOfDoors();
	void setNumberOfDoors(int x);
	void displayInfo();
};