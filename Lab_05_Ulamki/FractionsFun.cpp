#include "FractionsFun.h"
#include "Creators.h"
#include <iostream>

void Print(Fraction * fracToPrint)
{
	int wholePart = fracToPrint->numerator/fracToPrint->denominator;
	int fracPart;

	if(fracToPrint->numerator<0)
		fracPart = ((-1)*fracToPrint->numerator)%fracToPrint->denominator;
	else
		fracPart = fracToPrint->numerator%fracToPrint->denominator;

	if(wholePart)
		std::cout<<wholePart<<" ";

	std::cout<<fracPart<<"/"<<fracToPrint->denominator<<std::endl;
}

Fraction * Sum (Fraction * first, Fraction * second)
{
	int mutualDenominator = first->denominator * second->denominator;
	int numeratorAfterSum = first->numerator * second->denominator + second->numerator * first->denominator;

	return CreateFraction(numeratorAfterSum, mutualDenominator);
}

Fraction * Difference (Fraction * first, Fraction * second)
{
	second->numerator*=(-1);
	return Sum(first, second);
}

Fraction * Product(Fraction * first, Fraction * second)
{
	int numeratorAftProduct = first->numerator * second->numerator;
	int denominatorAftProduct = first->denominator * second->denominator;

	return CreateFraction(numeratorAftProduct, denominatorAftProduct);
}
