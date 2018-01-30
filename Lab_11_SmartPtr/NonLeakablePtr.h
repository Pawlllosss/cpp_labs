#ifndef NonLeakablePtrH
#define NonLeakablePtrH

#include "NonLeakable.h"

class NonLeakablePtr
{
public:
	//Konstruktor domyslny NonLeakablePtr
	NonLeakablePtr();
	//Konstruktor kopiujacy NonLeakablePtr przypisujacy do tworzonego obiektu adres _ptr_to_NonLeakable kopiowanego obiektu, a w kopiowanym obiekcie przestawiajacy adres do NULL
	NonLeakablePtr(NonLeakablePtr & non_leakable_ptr_to_copy);
	//funkcja tworzaca nowy obiekt klasy _ptr_to_NonLeakable
	void MakeNewObject();
	//Funkcja wypisujaca adres wskazywany przez _ptr_to_NonLeakable
	void Print() const;

	//Przeladowanie operatora -> zwracajacy _ptr_to_NonLeakable
	NonLeakable * operator ->();
	//Przeladowanie operatora = dzialanie takie samo jak konstruktora kopiujacego
	NonLeakablePtr & operator = ( NonLeakablePtr & non_leakable_ptr_to_assign );
	//przeladowanie operatora * zwracajacy *_ptr_to_NonLeakable
	NonLeakable & operator * ();
	//przeladowanie operatora & zwracajacy _ptr_to_NonLeakable
	NonLeakable * operator & ();

private:
	//wskaznik do obiektu klasy NonLeakable
	NonLeakable * _ptr_to_NonLeakable;
};
#endif
