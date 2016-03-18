#include <iostream>
#include "Tickets.h"
#include "Performance.h"
#include <string>
#include <iomanip>

using namespace std;

Tickets::Tickets(Performance* perfor, Seat s)
{
	perf = perfor;							//constructor for Tickets class
	seat = s;
	sold = false;
}


Tickets::~Tickets()
{
	delete perf;							//destructor for the Tickets class, must delete the pointer
}
