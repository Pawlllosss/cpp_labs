#include "Creators.h"
#include <iostream>

Fraction ** FractionsToRemove;

Fraction * CreateFraction( int numerator, int denominator)
{
	static int counter = 0;

	if(denominator<0)
	{
		denominator*=(-1);
		numerator*=(-1);
	}

	Fraction * newFraction = new Fraction;
	newFraction->numerator = numerator;
	newFraction->denominator = denominator;


	if(!counter)//nie ma jeszcze nic w tab
	{
		FractionsToRemove = new Fraction*[2];
		FractionsToRemove[0] = newFraction;
		FractionsToRemove[1] = 0;
	}
	else
	{
		Fraction ** tmpHold = new Fraction*[counter];

		for(int i=0 ; i<counter ; i++)
			tmpHold[i] = FractionsToRemove[i];

		delete [] FractionsToRemove;

		FractionsToRemove = new Fraction*[counter + 2]; //nowy obiekt i null

		for(int i=0; i<counter; i++)
			FractionsToRemove[i] = tmpHold[i];

		delete [] tmpHold;

		FractionsToRemove[counter] = newFraction;
		FractionsToRemove[counter + 1] = 0;
	}


	counter++;

	return newFraction;
}
