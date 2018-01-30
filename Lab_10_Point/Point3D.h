#ifndef Point3DH
#define Point3DH

#include <iostream>

class Point3D
{
public:
	//Kontruktor obiektu klasy Point3D, który jako argumenty przyjmuje wspolrzedne punktu
	Point3D(int x, int y, int z);

	//funkcja zwracaja wspolrzedna x typu int
	int GetX() const;
	//funkcja zwracaja wspolrzedna y typu int
	int GetY() const;
	//funkcja zwracaja wspolrzedna z typu int
	int GetZ() const;

	//operator porownania, zwraca true jezeli wspolrzedne obu punktow sa rowne, w przeciwnym razie false
	bool operator ==( const Point3D& point_to_compare);

	//przyjazn z funkcja globalna operatora << dla std::ostream wypisujaca wspolrzedne punktu w formacie(x, y, z)
	friend std::ostream& operator << ( std::ostream & output, const Point3D & point_to_print);
private:
	//wspolrzedne punktu
	int _x;
	int _y;
	int _z;
};
#endif
