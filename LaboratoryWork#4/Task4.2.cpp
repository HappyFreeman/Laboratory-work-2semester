#include <iostream>

using namespace std;

double power(double n, int p = 2) {
	double result = 1;
	for (int i = 0; i < p; i++)
		result *= n;
	return result;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	double number, answer;
	int pow;
	char yesorno;
	cout << "Введите число : ";
	cin >> number;
	cout << "Будите вводить степень (y/n)? : ";
	cin >> yesorno;
	if (yesorno == 'y') {
		cout << "Введите степень : ";
		cin >> pow;
		cout << "Ответ : " << power(number, pow) << endl;
	}
	else
		cout << "Квадрат числа : " << power(number) << endl;
}
