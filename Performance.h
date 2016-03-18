#include <string>
#include "Venue.h"
#pragma once

using namespace std;

struct DaTi				//struct containing date and time information
{
	int Day;
	int Month;
	int Year;
	int Hour;
	int Minute;
};

class Performance
{
private:
	string showName;
	Venue* venue;
	DaTi pdate;

public:
	Performance();
	Performance(Venue* ven, string name, DaTi pdate);
	string getName() { return showName; }
	Venue* getVenue() { return venue; }
	DaTi getDateTime() { return pdate; }
	~Performance();
};