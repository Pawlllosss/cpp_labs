#ifndef AngleH
#define AngleH

//klasa Angle przechowująca kąt w przedziale od 0 do 2PI w radianach
class Angle
{
public:

//typ wyliczeniowy enum pozwalający na wygodniejszy zapis przy informowaniu konstruktora o tym czy zadany kąt jest podawany w radianach czy stopniach RADIANS == 0 DEGREES == 1
	enum enum_TypeofAngle{RADIANS, DEGREES};

//konstruktor obiektu klasy Angle przyjmujacy dwa parametry. Wartosc ustawianego katu i sposob jego zapisu(stopnie czy radiany). W jego wnetrzu jest dokonywana konwersja na radiany i ustawienie wartości, tak aby mieściła się w przedziale od 0 do 2 PI
	Angle(const double setAngle, const enum_TypeofAngle typeOfAngle);
	
//konstruktor nazwany, który tworzy obiekt klasy Angle o zadanym kącie podanym w radianach
	static Angle fromRadians(const double radians);
//konstruktor nazwany, który tworzy obiekt klasy Angle o zadanym kącie podanym w stopniach
	static Angle fromDegrees(const double degrees);

//funkcja statyczna zwracająca obiekt klasy Angle przechowujący odległość między kątami. Zwracana jest mniejsza wartość
	static Angle distance(const Angle & angle1, const Angle & angle2);

//zwracana wartość kąta przechowywanego przez klasę Angle. Konwersja do radianów, czyli w tym przypadku zwracana jest po prostu wartość _rad.
	double toRad() const;
//zwracana wartość kąta przechowywanego przez klasę Angle. Konwersja do stopni.
	double toDeg() const;

//modyfikacja wartości _rad tak, aby mieścila się ona w przedziale od 0 do 2PI
	void normaliseRad();

//dodawanie wartości kątów. Zwracana jest referencja do wywołanego obiektu
	Angle & add(const Angle & angleToAdd);

//operator konwertujący obiekt klasy Angle do double. W tym przypadku zwraca on wartość _rad, co pozwala na porównanie wartości różnych obiektów klasy Angle
	operator double() const;

private:
//zmienna przechowująca wartość kąta w radianach
	double _rad;
};
#endif
