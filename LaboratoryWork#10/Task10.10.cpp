#include <iostream>

using namespace std;

class Linklist {
private:
	int* arr;
	const static int SIZE = 5;
public:
	Linklist() {
		arr = new int[SIZE];
	}
	~Linklist() {
		delete[] arr;
	}
	Linklist(const Linklist& other) { // конструктор копирования
		this->arr = new int[other.SIZE];
		for (int i = 0; i < SIZE; i++)
			this->arr[i] = other.arr[i];
	}

	Linklist& operator=(const Linklist &other) { // оператор присваивания
		delete[] arr;
		this->arr = new int[other.SIZE];
		for (int i = 0; i < SIZE; i++)
			this->arr[i] = other.arr[i];
		return *this;
	}
	int& operator[](int n) {
		return arr[n];
	}
};

int main()
{
	Linklist* arr = new Linklist;

	for (int i = 0; i < 5; i++) {
		arr->operator[](i) = i;
		//cout << arr->operator[](i) << " ";
	}

	Linklist* temp = arr;

	for (int i = 0; i < 5; i++)
		cout << temp->operator[](i) << " ";

	delete arr;
	return 0;
}