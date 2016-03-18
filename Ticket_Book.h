#include "Tickets.h"
#include <vector>
#pragma once

using namespace std;

class Ticket_Book
{
private:
	vector<Tickets*> ticVec;				//use of a vector to easily handle an unknown volume of tickets
	void createTickets(Performance* p);
public:
	Ticket_Book(Performance* p);
	void Display();
	~Ticket_Book();
};

