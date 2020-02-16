#include <iostream>

using namespace std;

struct time
{
	int hours;
	int minutes;
	int seconds;
};

long time_to_secs(time first) {
	return first.hours * 3600 + first.minutes * 60 + first.seconds;
}

time secs_to_time(long secs) {
	time first;
	first.hours = secs / 3600;
	secs %= 3600;
	first.minutes = secs / 60;
	first.seconds = secs % 60;
	return first;
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

	time result = secs_to_time(time_to_secs(first) + time_to_secs(second));

	cout << "Сумма : " << result.hours << ":" << result.minutes << ":" << result.seconds << endl;
}
