#include <iostream>

using namespace std;

struct fraction {
	int numerator;
	int denominator;
};

fraction fadd(fraction first, fraction second) {
	fraction result;
	result.numerator = first.numerator * second.denominator + first.denominator * second.numerator;
	result.denominator = first.denominator * second.denominator;
	return result;
}

fraction fsub(fraction first, fraction second) {
	fraction result;
	result.numerator = first.numerator * second.denominator - first.denominator * second.numerator;
	result.denominator = first.denominator * second.denominator;
	return result;
}

fraction fmul(fraction first, fraction second) {
	fraction result;
	result.numerator = first.numerator * second.numerator;
	result.denominator = first.denominator * second.denominator;
	return result;
}

fraction fdiv(fraction first, fraction second) {
	fraction result;
	result.numerator = first.numerator * second.denominator;
	result.denominator = first.denominator * second.numerator;
	return result;
}

int main()
{
	fraction first, second, result;
	char q = '/';
	char sign;

	cout << "Введите первую дробь (a/b) : ";
	cin >> first.numerator >> q >> first.denominator;

	cout << "Введите операцию : ";
	cin >> sign;

	cout << "Введите вторую дробь (c/d) : ";
	cin >> second.numerator >> q >> second.denominator;

	switch (sign)
	{
	case '+': result = fadd(first, second); break;
	case '-': result = fsub(first, second); break;
	case '*': result = fmul(first, second); break;
	case '/': result = fdiv(first, second); break;
	}

}
