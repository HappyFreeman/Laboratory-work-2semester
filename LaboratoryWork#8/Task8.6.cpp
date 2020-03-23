#include <iostream>
#include <string>

using namespace std;

const int LIMIT = 100;

class safearay {
private:
	int arr[LIMIT];
public:
	int& operator [](int n) {
		if (n < 0 || n >= LIMIT) {
			cout << "\nIndex out of bounds"; exit(1);
		}
		return arr[n];
	}
};

class safearay2 : private safearay {
private:
	int lower;
	int upper;
public:
	safearay2(int lower,int upper) : safearay() {
		this->lower = lower;
		this->upper = upper;
	}
	int& operator [] (int n) {
		if (n < lower || n > upper) {
			cout << "\nIndex out of bounds"; exit(1);
		}
		safearay::operator[](n - lower);
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
	int low, upp;
	cout << "Введите нижнюю и верхнюю границы массива : \n";
	cin >> low >> upp;

	safearay2 arr(low, upp);
	for (int i = low; i <= upp; i++) {
		arr[i] = i * 10;
		cout << "element " << i << " : " << arr[i] << endl;
	}
}
