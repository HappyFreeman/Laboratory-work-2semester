#include <iostream>

using namespace std;

class employee { 
private:
	int number;
	float salary;
public:

	employee() {
		number = 0;
		salary = 0;
	}

	employee(int n, float s) {
		number = n;
		salary = s;
	}

	void SetEmployee() {
		cout << "Введите данные о сотрудниках : " << endl;
		cin >> number >> salary;
	}

	void Display() {
		cout << number << "\t" << salary << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	employee em[3];
	for (int i = 0; i < 3; i++) {
		em[i].SetEmployee();
	}

	for (int i = 0; i < 3; i++) {
		em[i].Display();
	}
}
