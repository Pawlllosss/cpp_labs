#include "FractionArray.h"
#include <iostream>

FractionArray::~FractionArray()
{
	delete [] _fractionArray;
}

void FractionArray::AddFration(Fraction &frac_to_add)
{
	if(_elements<_size)
	{
		_fractionArray[_elements] = &frac_to_add;
		_elements++;
	}
}

void FractionArray::Print() const
{
	for(int i = 0; i <_elements ; i++)
	{
		std::cout<<i<<": ";
		_fractionArray[i]->Print();
	}
}

Fraction FractionArray::Sum()
{
		Fraction sumFraction(_fractionArray[0]->getNumerator(), _fractionArray[0]->getDenominator());
		for(int i = 1 ; i < _elements ; i++)
			sumFraction.Add(*(_fractionArray[i]));

		return sumFraction;
}
