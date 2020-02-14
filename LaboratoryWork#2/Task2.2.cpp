#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float celsius, fahrenheit, k;
	cout << "1 для перевода Цельсия в Фаренгейт" << endl
		<< "2 для перевода Фаренгейта в Цельсий : ";
	cin >> k;
	if (k == 1) {
		cout << "Введите температуру по Фаренгейту : ";
		cin >> fahrenheit;
		celsius = (fahrenheit - 32) * 5 / 9;
		cout << "Температура по Цельсию : " << celsius << endl;
	}
	else if (k == 2) {
		cout << "Введите температуру по Цельсию : ";
		cin >> celsius;
		fahrenheit = (celsius * 9 / 5) + 32;
		cout << "Температура по Фаренгейту : " << fahrenheit << endl;
	}
	else cout << "Down?" << endl;
}
