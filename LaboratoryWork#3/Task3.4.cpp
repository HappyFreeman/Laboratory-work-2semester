#include <iostream>

using namespace std;

struct employee {
	int number;
	float stipend;
};

int main()
{
	setlocale(LC_ALL, "Rus");
	employee worker1, worker2, worker3;
	cout << "Введите данные о сотрудниках : " << endl;
	cin >> worker1.number >> worker1.stipend
		>> worker2.number >> worker2.stipend
		>> worker3.number >> worker3.stipend;

	cout << "Данные сотрудников : \n" << worker1.number << "\t" << worker1.stipend << endl
		<< worker2.number << "\t" << worker2.stipend << endl
		<< worker3.number << "\t" << worker3.stipend << endl;
}
