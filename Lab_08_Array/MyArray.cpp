#include "MyArray.h"
#include <iostream>

MyArray::MyArray(const int size_to_set): size(actual_size), actual_size(size_to_set)
{
	array = new int[size];
}

MyArray::MyArray(const MyArray & par):size(actual_size), actual_size(par.actual_size)
{
	array = new int[size];
}

MyArray::~MyArray()
{
	delete [] array;
}

int & MyArray::at(const int index)
{
	return array[index];
}

int MyArray::at(const int index) const
{
	return array[index];
}

void MyArray::print() const
{
    std::cout<<"Array content:"<<std::endl;

	for(int i = 0 ; i < size ; i++)
		std::cout<<"array["<<i<<"] = "<<array[i]<<std::endl;
}

void MyArray::resize(const int new_size)
{
	int * tmp_array = new int[size];

	for(int i = 0 ; i < size ; i++)
		tmp_array[i] = array[i];

	delete [] array;

	array = new int[new_size];

	for(int i = 0 ; i < size ; i++)
		array[i] = tmp_array[i];

	actual_size = new_size;

	delete [] tmp_array;
}
