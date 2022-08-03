// Jenice Mario
// CIS 1202 5T1
// August 31, 2022


#include <iostream>
#include "Vehicle.h"
#include "Car.h"
#include "Truck.h"
#include <string>
using namespace std;


int main()
{
	string i;
	int j;
	int x;
	int y;

	cout << "Vehicle Program" << endl;

	cout << "\nVehicle: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, i);
	cout << "Enter the year built: ";
	cin >> j;
	Vehicle v(i, j);
	v.displayInfo();

	cout << endl << "Car: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, i);
	cout << "\nEnter the year built: ";
	cin >> j;
	cout << "Enter the number of doors: ";
	cin >> x;
	Car c(i, j, x);
	c.displayInfo();

	cout << endl << "Truck: " << endl;
	cout << "Enter the manufacturer: ";
	getline(cin, i);
	cout << "\nEnter the year built: ";
	cin >> j;
	cout << "Enter the towing capacity: ";
	cin >> y;
	Truck t(i, j, y);
	t.displayInfo();

	return 0;
}