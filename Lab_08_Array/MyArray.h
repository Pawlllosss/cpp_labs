#ifndef MyArrayH
#define MyArrayH

class MyArray
{
public:
	MyArray(const int size_to_set);
	MyArray(const MyArray & par);

	~MyArray();

	int& at(const int index);
	int at(const int index) const;
	void print() const;
	void resize(const int new_size);

	int const & size;
private:
	int actual_size;
	int *array;
};
#endif
