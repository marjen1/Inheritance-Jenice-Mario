#pragma once
#include <iostream>
using namespace std;

class Vehicle
{
	string manufacturer;
	int yearBuilt;

public:

	Vehicle();
	Vehicle(string i, int j);
	string getManufacturer();
	int getYearBuilt();
	void setManufacturer(string i);
	void setYearBuilt(int j);
	void displayInfo();
};