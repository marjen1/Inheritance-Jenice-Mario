#include <iostream>
#include "Vehicle.h"
#include "Car.h"
using namespace std;


Car::Car() : Vehicle()
{
	numberOfDoors = 0;
}


Car::Car(string i, int j, int x) : Vehicle(i, j)
{
	numberOfDoors = j;
}


int Car::getNumberOfDoors()
{
	return numberOfDoors;
}


void Car::setNumberOfDoors(int j)
{
	numberOfDoors = j;
}


void Car::displayInfo()
{
	Vehicle::displayInfo();
	cout << "Doors: " << getNumberOfDoors() << endl;
}