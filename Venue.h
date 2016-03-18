#include <string>
#include "Address.h"
#pragma once

using namespace std;

struct Seat
{
	string row;										//struct definining the seats of a venue
	int seatNum;
};

struct Seat_Row {
	static const int seatMax = 1000;
	char row;										//struct composing the rows of a venue
	int numSeats;
	Seat seats[seatMax];
};

class Venue
{
public: 
	static const int maxSeat = 1000;
private:
	string VenueName;						//class composed of the information for a venue
	Seat_Row rows[maxSeat];
	Address Vlocation;
	int Capacity;

public:
	Venue();
	Venue(string vName, Address adr);
	string getName() { return VenueName; }
	Seat_Row getRow(int i) { return rows[i]; }
	int rowCount();
	Address getAddress() { return Vlocation; }
	int getCapacity() { return Capacity; }
	void makeRows(int r, int s);
	~Venue();
};

