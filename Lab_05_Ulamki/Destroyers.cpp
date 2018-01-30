#include "Destroyers.h"
#include "FractionsFun.h"
#include <iostream>

extern Fraction ** FractionsToRemove;

void clear()
{

    int i=0;

	while(FractionsToRemove[i] != 0)
	{
		delete FractionsToRemove[i];
		i++;
	}

	delete FractionsToRemove[i];//usuwam wartownika

	delete [] FractionsToRemove;
}
