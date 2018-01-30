#ifndef FRACTIONSFUNH
#define FRACTIONSFUNH
	typedef struct Fraction
	{
		int numerator;
		int denominator;
	} Fraction;

	void Print(Fraction * fracToPrint);
	Fraction * Sum (Fraction * first, Fraction * second);
	Fraction * Difference (Fraction * first, Fraction * second);
	Fraction * Product(Fraction * first, Fraction * second);

#endif
