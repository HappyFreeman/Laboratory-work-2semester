#include <iostream>

using namespace std;

struct fraction {
	int numerator;
	int denominator;
};

int main()
{
	setlocale(LC_ALL, "Rus");
	
	fraction first, last, result;

	char sign, q, ch = 'y';
	do {
		cout << "Введите первую дробь (a/b) : ";
		cin >> first.numerator >> q >> first.denominator;
		cout << "Введите операцию : ";
		cin >> sign;
		cout << "Введите вторую дробь (c/d) : ";
		cin >> last.numerator >> q >> last.denominator;
		switch (sign)
		{
		case'+':
			result.numerator = first.numerator * last.denominator + first.denominator * last.numerator;
			result.denominator = first.denominator * last.denominator;
			cout << "Результат : " << result.numerator << "/" << result.denominator << endl;
			break;
		case'-':
			result.numerator = first.numerator * last.denominator - first.denominator * last.numerator;
			result.denominator = first.denominator * last.denominator;
			cout << "Результат : " << result.numerator << "/" << result.denominator << endl;
			break;
		case'*':
			result.numerator = first.numerator * last.numerator;
			result.denominator = first.denominator * last.denominator;
			cout << "Результат : " << result.numerator << "/" << result.denominator << endl;
			break;
		case'/':
			result.numerator = first.numerator * last.denominator;
			result.denominator = first.denominator * last.numerator;
			cout << "Результат : " << result.numerator << "/" << result.denominator << endl;
			break;
		default: cout << "Down?" << endl;
			break;
		}
		cout << "Выполнить ещё одну операцию (y/n)? : ";
		cin >> ch;
	} while (ch == 'y');
}
