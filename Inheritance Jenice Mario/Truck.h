#pragma once
#include <iostream>
#include "Vehicle.h"
using namespace std;


class Truck : public Vehicle
{
	int towingCapacity;

public:

	Truck();
	Truck(string i, int j, int x);
	int getTowingCapacity();
	void setTowingCapacity(int x);
	void displayInfo();
};