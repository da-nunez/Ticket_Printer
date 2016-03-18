#include "Performance.h"
#pragma once
#include <string>

using namespace std;


class Tickets
{
private:
	Performance* perf;	
	Seat seat;
	bool sold;
public:
	Tickets(Performance* p, Seat s);
	Performance* getPerformance() { return perf; }
	Seat getSeat() { return seat; }
	bool isSold() { return sold; }
	~Tickets();
};
