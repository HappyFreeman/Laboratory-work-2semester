#include <iostream>

using namespace std;

struct fraction
{
	int numerator;
	int denominator;
};

int main()
{
	setlocale(LC_ALL, "Rus");
	fraction first, second;
	char ch = '/';

	cout << "Введите первую дробь a/b : ";
	cin >> first.numerator >> ch >> first.denominator;

	cout << "Введите вторую дробь c/d : ";
	cin >> second.numerator >> ch >> second.denominator;

	fraction result;
	result.numerator = first.numerator * second.denominator + second.numerator * first.denominator;
	result.denominator = first.denominator * second.denominator;

	cout << "Сумма : " << result.numerator << "/" << result.denominator << endl;
}