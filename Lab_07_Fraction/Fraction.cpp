#include "Fraction.h"
#include <iostream>

void Fraction::Print() const
{
	int whole_part = _numerator/_denominator;
	int rest =_numerator%_denominator;

	if(whole_part)
	std::cout<<whole_part<<" ";

	std::cout<<rest<<"/"<<_denominator<<std::endl;
}

void Fraction::Add(const Fraction & frac_to_add)
{
	_numerator = frac_to_add._numerator*_denominator + _numerator*frac_to_add._denominator;

	_denominator = frac_to_add._denominator * _denominator;
}

void Fraction::SetValue(const int num, const int den)
{
	_numerator = num;
	_denominator = den;
}

int Fraction::getDenominator()
{
	return _denominator;
}

int Fraction::getNumerator()
{
	return _numerator;
}
