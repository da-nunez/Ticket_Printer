#include "Performance.h"



Performance::Performance()
{							//default constructor
}

Performance::Performance(Venue* ven, string name, DaTi dt)
{
	venue = ven;			//Constructor for Performance Class
	showName = name;
	pdate = dt;
}

Performance::~Performance()
{
	delete venue; 
}
