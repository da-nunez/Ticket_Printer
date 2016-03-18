#include <iostream>
#include "Ticket_Book.h"
using namespace std;

// Create a Seat_Row with the specified name and 4 seats,
// numbered 1 to 4.
Venue* Create_Venue()
{
	string name = "The Little Theater";
	string street = "19 Foster Street";
	string city = "Littleton";
	string state = "MA";
	int zip = 1460;
	
	Address theater = Address(street, city, state, zip);
	Venue* v = new Venue(name, theater);
	v->makeRows(3, 4);
	return v;
}

Performance* Create_Performance(Venue* v)
{
	string name = "Billy Elliot";
	DaTi dt;
	dt.Day = 2;
	dt.Month = 4;
	dt.Year = 2016;
	dt.Hour = 20;
	dt.Minute = 00;
	Performance* perfy = new Performance(v, name, dt);
	return perfy;
}

int main()
{
	cout << "This is Ticket_Printer\n\n\n";

	Venue* venue = Create_Venue();
	Performance* performance = Create_Performance(venue);
	Ticket_Book* ticket_book = new Ticket_Book(performance);
	ticket_book->Display();

	cin.get();
	return 0;
}
 