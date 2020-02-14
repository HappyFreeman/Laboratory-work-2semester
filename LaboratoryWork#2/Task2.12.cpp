#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int a, b, c, d;
	int numerator, denominator;
	char sign, q, ch = 'y';
	do {
		cout << "Введите первую дробь (a/b) : ";
		cin >> a >> q >> b;
		cout << "Введите операцию : ";
		cin >> sign;
		cout << "Введите вторую дробь (c/d) : ";
		cin >> c >> q >> d;
		switch (sign)
		{
		case'+':
			numerator = a * d + b * c;
			denominator = b * d;
			cout << "Результат : " << numerator << "/" << denominator << endl;
			break;
		case'-':
			numerator = a * d - b * c;
			denominator = b * d;
			cout << "Результат : " << numerator << "/" << denominator << endl;
			break;
		case'*':
			numerator = a * c;
			denominator = b * d;
			cout << "Результат : " << numerator << "/" << denominator << endl;
			break;
		case'/':
			numerator = a * d;
			denominator = b * c;
			cout << "Результат : " << numerator << "/" << denominator << endl;
			break;
		default: cout << "Down?" << endl;
			break;
		}
		cout << "Выполнить ещё одну операцию (y/n)? : ";
		cin >> ch;
	} while (ch == 'y');
}
