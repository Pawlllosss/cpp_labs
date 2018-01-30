#ifndef NonLeakableH
#define NonLeakableH

#include <iostream>

class NonLeakablePtr;

class NonLeakable
{
public:
	//konstruktor domyslny NonLeakable przypisuje nowemu obiektu _cuurent_obj_id i inkrementuje zmienna statyczna _id
	NonLeakable();
	//wypisanie id aktualnego obiektu
	void Print() const;
	//przyjazn z NonLeakablePtr
	friend class NonLeakablePtr;
private:
	//funkcja statyczna korzystajaca z prywatnego przeladowania operatora new
	static NonLeakable* CreateNonLeakable();
	//wartosc liczaca ilosc utworzonych obiektow
	static int _id;
	//wartosc id aktualnego obiektu
	int _current_obj_id;
	//przeladowany operator new
	static void * operator new(size_t size_to_set);
};
#endif
