#include <iostream>

using namespace std;

struct time {
	int hours;
	int minutes;
	int seconds;
};

int main()
{
	time t1;
	setlocale(LC_ALL, "Rus");
	cout << "Введите количество часов : ";
	cin >> t1.hours;
	cout << "Введите количество минут : ";
	cin >> t1.minutes;
	cout << "Введите количество секунд : ";
	cin >> t1.seconds;

	long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	cout << "Общее количество секунд : " << totalsecs << endl;

}
