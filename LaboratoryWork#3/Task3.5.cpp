#include <iostream>

using namespace std;

struct date {
	int month;
	int day; 
	int year;
};

int main()
{
	char ch;
	date first;
	setlocale(LC_ALL, "Rus");
	cout << "Введите дату в формате ММ/ДД/ГГ : ";
	cin >> first.month >> ch >> first.day >> ch >> first.year;
	
	cout << endl << first.month << "/" << first.day << "/" << first.year << endl;
}
