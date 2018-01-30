#include "Main.h"
#include <iostream>
#include <cstdlib>

void print(const Student studentToPrint)
{
	std::cout<<"Initials: "<<studentToPrint.first_letter_name<<". "<<studentToPrint.first_letter_surname<<". 	grade: "<<studentToPrint.grade<<std::endl;
}

void set_student (const char name_first_l, const char surname_first_l, const int grade, Student * studentPtr)
{
	studentPtr->first_letter_name=name_first_l;
	studentPtr->first_letter_surname=surname_first_l;
	studentPtr->grade=grade;
}

void init_array(StudentsArray * tab, const int array_size)
{
	tab->element = (Student **)malloc(sizeof(Student*)*array_size);
	tab->array_size = array_size;

}

void init_iter (StudentsArray * arrayPtr, Iterator * iteratorPtr)
{
	iteratorPtr->object = arrayPtr->element[0];
	iteratorPtr->number_of_objects = arrayPtr->array_size;
	iteratorPtr->current = 0;
	iteratorPtr->ptr_to_array = arrayPtr;
}

void move_forward(Iterator * iteratorPtr)
{
	if(iteratorPtr->current>=iteratorPtr->number_of_objects -1)
		iteratorPtr->object = 0;
	else
	{
		iteratorPtr->current+=1;
		iteratorPtr->object=iteratorPtr->ptr_to_array->element[iteratorPtr->current];
	}

}

void select_element(Iterator * iteratorPtr, const int elementNmb)
{
	iteratorPtr->object = iteratorPtr->ptr_to_array->element[elementNmb];
	iteratorPtr->current = elementNmb;
}

void delete_array (StudentsArray * arrayPtr)
{
	free(arrayPtr->element);
}
