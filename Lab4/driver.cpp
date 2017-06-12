//Michael Cullimore
//CS1410 - Brinkerhoff
//Lab4 - Sterling Driver

#include <iostream>
#include "sterling.h"
using namespace std;

int main ()
{
	sterling ster1;
	read (&ster1);

	sterling ster2;
	read (&ster2);

	sterling x = add (ster1, ster2);
	print (x);

	//system ("pause");
	return 0;
}