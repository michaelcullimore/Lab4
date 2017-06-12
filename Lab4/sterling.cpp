//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab4 - Sterling

#include <iostream>
#include <iomanip>
#include "sterling.h"
using namespace std;

sterling make_sterling (int poun, int shil, int penc) {
	sterling temp;

	temp.pounds = poun;
	temp.shillings = shil;
	temp.pence = penc;

	return temp;
}

sterling make_sterling (int penc)
{
	sterling temp;

	temp.pounds = penc / 240;
	penc %= 240;
	temp.shillings = penc / 12;
	temp.pence = penc % 12;

	return temp;
}

sterling add (sterling ster1, sterling ster2)
{
	int i1 = ster1.pounds * 240 + ster1.shillings * 12 + ster1.pence;
	int i2 = ster2.pounds * 240 + ster2.shillings * 12 + ster2.pence;

	return make_sterling (i1 + i2);
}

void print (sterling& ster)
{
	cout << (char)156; cout << ster.pounds << "." << ster.shillings << "." << ster.pence << endl;
}

void read (sterling* ster)
{
	cout << "Enter number of pounds:" << endl;
	cin >> ster->pounds;

	cout << "Enter number of shillings: " << endl;
	cin >> ster->shillings;

	cout << "Enter number of pence: " << endl;
	cin >> ster->pence;
}