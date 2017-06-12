//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab4 - Sterling Header
#pragma once

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

sterling make_sterling (int poun, int shil, int penc);
sterling make_sterling (int penc);
sterling add (sterling ster1, sterling ster2);
void print (sterling& ster);
void read (sterling* ster);
