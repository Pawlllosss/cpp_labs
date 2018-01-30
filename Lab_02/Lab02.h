#ifndef LAB02
#define LAB02
#include <iostream>
#include <string.h>

//funkcja dodająca studenta do listy
     void AddStudent(int *numberOfStudents, char *** namesList, char ***surnamesList,
       int **yearsList, const char *firstName, const char*secondName, const char *surname, int year);

//wyświetlanie listy studentów w zależności od podanych argumentów
void PrintListContent(int numberOfStudents, char ** namesList);

void  PrintListContent (int numberOfStudents, int * yearsList);


void PrintListContent (int numberOfStudents, char ** namesList, char ** surnamesList, int * yearsList);

//funkcja odpowiadająca za czyszczenie pamięci
void ClearStudents (int * numberOfStudents, char *** namesList, char ***surnamesList, int ** yearsList);

#endif // LAB02
