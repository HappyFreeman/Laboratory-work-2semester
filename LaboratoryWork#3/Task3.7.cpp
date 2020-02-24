#include <iostream>
#include <string>

using namespace std;

enum etype {
	laborer, secretary, manager, accountant, executive, researcher
};

struct date {
	int month;
	int day;
	int year;
};

struct employee {
	int number;
	float stipend;
	date employeeDate;
	etype position;
};

int main() 
{
	setlocale(LC_ALL, "Rus");
	//employee first, second, third;
	employee worker[3];
	char ch = ':';
	string place;

	for (int i = 0; i < 3; i++) {
		cout << "Введите индетификационный сотрудника номер " << i << " : ";
		cin >> worker[i].number;
		cout << "Введите зарплату сотрудника номер " << i << " : ";
		cin >> worker[i].stipend;
		cout << "Дата принятия на работу (мм/дд/гггг): ";
		cin >> worker[i].employeeDate.month >> ch >> worker[i].employeeDate.day >> ch >> worker[i].employeeDate.year;
		cout << "Введите должность (laborer, secretary, manager, accountant, executive, researcher): ";
		cin >> place;
	}

	for (int i = 0; i < 3; i++) {
		cout << "Зарплата сотрудника под номером " << worker[i].number << " " << worker[i].stipend << endl;
		cout << "Он устроился " << worker[i].employeeDate.month << "/" << worker[i].employeeDate.year << "/" << worker[i].employeeDate.year << endl;
		cout << "Он является " << place << endl;
	}
}