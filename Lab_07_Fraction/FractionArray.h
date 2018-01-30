#ifndef FractionArrayH
#define FractionArrayH
#include "Fraction.h"

class FractionArray
{
public:
	//konstruktor obiektu klasy FractionArray, przypisuje wartość _size opisującą rozmiar tablicy wskaźników na obiekty klasy Fraction i zerującą wartość _elements (elementy początkowe)
	//oraz alokująca tablicę _fractionArray na podstawie podanej wartości _size
	FractionArray(const int size):_size(size), _elements(0)
	{
		_fractionArray = new Fraction*[_size];
	}

	//destrutor obiektu klasy FractionArray odpowiada za zwolnienie pamięci po zaalokowanej tablicy _fractionArray
	~FractionArray();

	//dodaje do tablicy wskaźników na obiekty klasy Fraction, kolejny wskaźnik do obiektu klasy Fraction(przesyłanie przez referencję, aby mieć adres oryginalnego obiekty)
	void AddFration(Fraction & frac_to_add);
	//wypisuje zawartość tablicy
	void Print() const;
	//sumuje ułamki znajdujące się w tablicy
	Fraction Sum();
private:
	//rozmiar tablicy
	const int _size;
	//liczba elementów aktualnie znajdujących się w tablicy
	int _elements;
	//wskaźnik na wskaźnik na obiekt klasy Fraction służący do dynamicznej alokacji tablicy wskaźników do obiektu klasy Fraction
	Fraction ** _fractionArray;
};
#endif
