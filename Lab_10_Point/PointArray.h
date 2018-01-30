#ifndef PointArrayH
#define PointArrayH
#include "Point3D.h"

class PointArray
{
public:
	//kontruktor obiektu klasy PointArray przyjmujacy jako argument rozmiar tablicy podany w int oraz obiekt klasy Point3D bedacy domyslna wartoscia w tablicy
	PointArray( const int size , const Point3D & default_value );
	//konstruktor kopiujacy obiektu klasy PointArray
	PointArray( const PointArray & array_to_copy);
	//destruktor biektu klasy PointArray zwalniajacy pamiec po tablicy wskaznikow na obiekty klasy Point3D _array
	~PointArray();

	//przeladowany operator [] umozliwiajacy dostep do elementu tablicy _array o indeksie index_array
	Point3D & operator []( unsigned int index_array );

	//operator przypisania obiektu PointArray kopiujacy wartosci znajdujace sie w drugim obiekcie klasy PointArray
	PointArray& operator = ( const PointArray & array_to_copy);
	//przeladowany operator == pozwalajacy okreslic czy dwie tablice sa identyczne
	bool operator ==( const PointArray& array_to_compare);

	//wypisywanie tablicy punktow na ekran
	void Print() const;
private:
	//rozmiar tablicy
	int _array_size;
	//domyslna wartosc punktu
	Point3D _default_value;
	//tablica wskaznikow na punkty
	Point3D ** _array;
};
#endif
