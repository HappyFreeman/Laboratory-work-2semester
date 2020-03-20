#include <iostream>
#include <process.h> //for exit()

using namespace std;

const int LIMIT = 100; //array size

class safearay {
private:
	int *arr;
	int first;
	int last;
public:
	safearay(int first, int last) {
		this->first = first;
		this->last = last;
		arr = new int[last - first + 1];
	}
	~safearay() {
		delete[] arr;
	}
	int& operator [](int n) { //note: return by reference
		if (n < first || n > last) {
			cout << "\nIndex out of bounds"; exit(1);
		}
		return arr[n-first];
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	int first, last;
	cout << "Введите верхнюю и нижнюю границы массива : \n";
	cin >> first >> last;
	safearay sa1(first,last);

	for (int j = first; j <= last; j++) 
		sa1[j] = j * 10; 

	for ( int j = first; j <= last; j++){ 
		int temp = sa1[j]; 
		cout << "Element " << j << " is " << temp << endl;
	}

}