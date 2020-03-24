#include <iostream>

using namespace std;


class Array                     //models a normal C++ array
{
private:
	int* ptr;                 //pointer to Array contents
	int size;                 //size of Array
public:
	Array(int s)              //one-argument constructor
	{
		size = s;              //argument is size of Array
		ptr = new int[s];      //make space for Array
	}
	~Array()                  //destructor
	{
		delete[] ptr;
	}
	int& operator [] (int j)  //overloaded subscript operator
	{
		return *(ptr + j);
	}

	Array(const Array& other) { // конструктор копирования
		this->size = other.size;
		this->ptr = new int[size];
		for (int i = 0; i < size; i++) {
			this->ptr[i] = other.ptr[i];
		}
	}

	Array & operator = (const Array& other) { // оператов присваивания
		if (this->ptr != nullptr)
			delete[] this->ptr;

		this->size = other.size;
		this->ptr = new int[size];

		for (int i = 0; i < size; i++) {
			this->ptr[i] = other.ptr[i];
		}

		return *this;

	}



};
////////////////////////////////////////////////////////////////
int main()
{
	const int ASIZE = 10;        //size of array
	Array arr(ASIZE);            //make an array

	for (int j = 0; j < ASIZE; j++)   //fill it with squares
		arr[j] = j * j;

	for (int j = 0; j < ASIZE; j++)       //display its contents
		cout << arr[j] << ' ';
	cout << endl;
	return 0;
}
