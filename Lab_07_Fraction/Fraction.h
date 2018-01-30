#ifndef FractionH
#define FractionH

class Fraction
{
public:
	//Konstruktor obiektu klasy Fraction - przypisuje licznik(_numerator) i mianownik(_denominator)
	Fraction(const int num, const int den): _numerator(num), _denominator(den){}
	//Wypisuje ułamek w postaci właściwej(czyli część całkowita i ułamkowa)
	void Print() const;
	//Do obiektu klasy Fraction, dla którego została wywołana metoda(dla ułamka), dodaje inny ułamek(inny obiekt klasy Fraction)
	void Add(const Fraction & frac_to_add);
	//Ustawia wartość licznika i mianownika ułamka(obiektu klasy Fraction)
	void SetValue(const int num, const int den);
	//Zwraca wartość mianownika ułamka
	int getDenominator();
	//Zwraca wartość licznika ułamka
	int getNumerator();
private:
	//licznik
	int _numerator;
	//mianownik
	int _denominator;
};
#endif
