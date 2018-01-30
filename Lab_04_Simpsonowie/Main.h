#ifndef MAINH
#define MAINH

//struktura przechowująca dane pojedyńczego studenta(pierwsza litera imienia, nazwiska i rok) i jego typedef

struct Student
{
  char first_letter_name;
  char first_letter_surname;
  int grade;
};

typedef struct Student Student;

//struktura przechowująca tablicę wskaźników na typ Student i rozmiar tej tablicy i typedef struktury

struct StudentsArray
{
	Student ** element;
	int array_size;
};

typedef struct StudentsArray StudentsArray;

//struktura będąca iteratorem pozwalająca przemieszczać się po wpisach kolejnych studentów. Przechowuje aktualnie wskazywany objekt i jego nr w tablicy typu StudentsArray oraz liczbę obiektów tej tablicy

struct Iterator
{
	Student * object;
	int current;
	int number_of_objects;
	StudentsArray *ptr_to_array;
};

typedef struct Iterator Iterator;

//wypisuje dane zawarte w strukturze Student
void print(const Student studentToPrint);

//przypisuje dane studenta
void set_student (const char name_first_l, const char surname_first_l, const int grade, Student * studentPtr);

//tworzy tablicę studentow
void init_array(StudentsArray * tab, const int array_size);

//inicjalizuje iterator
void init_iter (StudentsArray * arrayPtr, Iterator * iteratorPtr);

//przemieszcza iterator po kolejnych elementach
void move_forward(Iterator * iteratorPtr);

//ustawia iterator na wybrany element
void select_element(Iterator * iteratorPtr, const int elementNmb);

//czyści pamięć po dynamicznej alokacji tablicy wskaźników na typ Student
void delete_array (StudentsArray * arrayPtr);

#endif
