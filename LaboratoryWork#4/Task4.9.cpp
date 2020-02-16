#include <iostream>

using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

void swap(time &first, time &second) {
	time baf = first;
	first = second;
	second = baf;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	time first, second;
	char ch = ':';

	cout << "Введите первое значение времени ЧЧ:ММ:СС : ";
	cin >> first.hours >> ch >> first.minutes >> ch >> first.seconds;
	cout << "Введите второе значение времени ЧЧ:ММ:СС : ";
	cin >> second.hours >> ch >> second.minutes >> ch >> second.seconds;

	swap(first, second);
	cout << first.hours << " " << first.minutes << " " << first.seconds << endl;
}
