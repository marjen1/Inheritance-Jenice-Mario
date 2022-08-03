#include <iostream>
#include "Vehicle.h"
#include "Truck.h"
using namespace std;


Truck::Truck() : Vehicle()
{
	towingCapacity = 0;
}


Truck::Truck(string i, int j, int x) : Vehicle(i, j)
{
	towingCapacity = x;
}


int Truck::getTowingCapacity()
{
	return towingCapacity;
}


void Truck::setTowingCapacity(int x)
{
	towingCapacity = x;
}


void Truck::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Towing Capacity: " << getTowingCapacity() << endl;
}