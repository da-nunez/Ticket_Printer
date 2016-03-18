#include "Ticket_Book.h"
#include <iostream>
#include <iomanip>

using namespace std;

Ticket_Book::Ticket_Book(Performance* p)
{
	createTickets(p);
}

void Ticket_Book::createTickets(Performance* p)
{
	int numRows = p->getVenue()->rowCount();
	for (int i = 0; i < numRows; i++)
	{
		Seat_Row row = p->getVenue()->getRow(i);
		for (int x = 0; x < row.numSeats; x++)
		{
			Seat temp;
			temp.row = row.row;
			temp.seatNum = x + 1;
			Tickets* newTic = new Tickets(p, temp);
			ticVec.push_back(newTic);
		}
	}
}

void Ticket_Book::Display()
{
	for (int i = 0; i < ticVec.size(); i++)
	{
		Tickets* tic = ticVec.at(i);
		DaTi d = tic->getPerformance()->getDateTime();
		Venue* v = tic->getPerformance()->getVenue();

		cout << "Performance: " << tic->getPerformance()->getName() << endl;
		cout << d.Month << "/" << d.Day << "/" << d.Year << " at " << d.Hour << ":" << setw(2) << setfill('0') << d.Minute << endl;
		cout << v->getName() << endl;
		cout << v->getAddress().streetname() << endl;
		cout << v->getAddress().cityname() << ", " << v->getAddress().statename() << " 0" << v->getAddress().zipcode() << endl;
		cout << "Row " << tic->getSeat().row << " Seat " << tic->getSeat().seatNum << endl;
		cout << "-----------------------------------" << endl;
	}
}

Ticket_Book::~Ticket_Book()
{
	for (int i = ticVec.size() - 1; i >= 0; i--)
	{
		delete ticVec.at(i);
	}
}
