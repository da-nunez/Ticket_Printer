#include <string>
#pragma once

using namespace std;

class Address
{
private:
	string street;
	string city;
	string state;
	int zcode;
public:
	Address();
	Address(string streetName, string cityName, string stateName, int zip);
	string streetname() const { return street; }
	string cityname() const { return city; }
	string statename() const { return state; }
	int zipcode() const { return zcode; }
	~Address();
};
