#include <iostream>

using namespace std;

struct time {
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	time first, last, result;
	long int seconds;
	char ch = ':';
	setlocale(LC_ALL, "Rus");
	cout << "Введите первое значение времени ЧЧ:ММ:СС : ";
	cin >> first.hours >> ch >> first.minutes >> ch >> first.seconds;
	cout << "Введите второе значение времени ЧЧ:ММ:СС : ";
	cin >> last.hours >> ch >> last.minutes >> ch >> last.seconds;
	seconds = first.hours * 3600 + first.minutes * 60 + first.seconds
		+ last.hours * 3600 + last.minutes * 60 + last.seconds;
	result.hours = seconds / 3600;
	seconds %= 3600;
	result.minutes = seconds / 60;
	result.seconds = seconds % 60;
	cout << "Сумма : " << result.hours << ":" << result.minutes << ":" << result.seconds << endl;
	
}
