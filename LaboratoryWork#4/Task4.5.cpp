#include <iostream>

using namespace std;

long hms_to_secs(int hours,int minutes,int seconds) {
	return hours * 3600 + minutes * 60 + seconds;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int h, m, s;
	while (true) {
		cout << "Введите количество часов : "; cin >> h;
		cout << "Введите количество минут : "; cin >> m;
		cout << "Введите количество секунд : "; cin >> s; cout << endl;
		cout << "Всего секунд : " << hms_to_secs(h, m, s) << endl << endl;
	}
}
