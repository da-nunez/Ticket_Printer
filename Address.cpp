#include "Address.h"
#include <iostream>

using namespace std;

Address::Address()
{
}

Address::Address(string streetName, string cityName, string stateName, int zip)
{
	street = streetName;						//address constructor, address later used in Venue constructor
	city = cityName;
	state = stateName;
	zcode = zip;
}


Address::~Address()
{
}