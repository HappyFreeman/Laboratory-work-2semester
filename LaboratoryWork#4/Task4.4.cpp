#include <iostream>

using namespace std;

struct Distavce {
	int feet;
	float inches;
};

Distavce bigend(Distavce dd1, Distavce dd2) {
	if (dd1.feet > dd2.feet) return dd1;
	if (dd1.feet < dd2.feet) return dd2;

	if (dd1.inches > dd2.inches) return dd1;
	else return dd2;
}

void engldisp(Distavce dd) {
	cout << dd.feet << "\'-" << dd.inches << "\"" << endl;
}

int main()
{
	Distavce d1, d2, d3;
	setlocale(LC_ALL, "Rus");

	cout << "Введите число фунтов : ";
	cin >> d1.feet;
	cout << "Введите число дюймов : ";
	cin >> d1.inches;

	cout << "Введите число фунтов : ";
	cin >> d2.feet;
	cout << "Введите число дюймов : ";
	cin >> d2.inches;

	d3 = bigend(d1, d2);
	cout << "d1 = "; engldisp(d1);
	cout << "d2 = "; engldisp(d2);
}
