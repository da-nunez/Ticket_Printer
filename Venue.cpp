#include "Venue.h"
#include "Address.h"
#include <string>

using namespace std;

Venue::Venue() 
{
}

Venue::Venue(string vName, Address vLoc)	//constructor for a venue object
{
	VenueName = vName;
	Vlocation = vLoc;
}

void Venue::makeRows(int r, int s)			//make function for the seats and rows of a venue
{
	char rName = 'A';
	for (int i = 0; i < r; i++)
	{
		rows[i].row = rName + i;
		for (int x = 0; x < s; x++)
		{
			rows[i].seats[x].row = rows[i].row;
			rows[i].seats[x].seatNum = x + 1;
		}
		rows[i].numSeats = s;
	}
	Capacity = r * s;
}

int Venue::rowCount()					//funtion to track the number of rows
{
	return Capacity / rows[0].numSeats;
}


Venue::~Venue()
{
}
