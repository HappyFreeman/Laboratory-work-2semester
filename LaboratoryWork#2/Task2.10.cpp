#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float first, last, rate;
	int years = 0;
	cout << "Введите начальную сумму : ";
	cin >> first;
	cout << "Введите процентную ставку : ";
	cin >> rate;
	cout << "Введите желаемую сумму : ";
	cin >> last;
	while (last > first) {
		first += first * rate / 100;
		years++;
	}
	cout << "Желаемой суммы достигните через лет : " << years << endl;
}
