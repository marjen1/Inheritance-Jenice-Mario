#include <iostream>
#include "Vehicle.h"
using namespace std;


Vehicle::Vehicle()
{
	manufacturer = " ";
	yearBuilt = 0;
}


Vehicle::Vehicle(string i, int j)
{
	manufacturer = i;
	yearBuilt = j;
}


string Vehicle::getManufacturer()
{
	return manufacturer;
}


int Vehicle::getYearBuilt()
{
	return yearBuilt;
}


void Vehicle::setManufacturer(string i)
{
	manufacturer = i;
}


void Vehicle::setYearBuilt(int j)
{
	yearBuilt = j;
}


void Vehicle::displayInfo()
{
	cout << "Vehicle Information: " << endl;
	cout << "Manufacturer: " << getManufacturer() << endl;
	cout << "Year Built: " << getYearBuilt() << endl;
}