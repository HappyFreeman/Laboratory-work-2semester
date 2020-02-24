#include <iostream>

using namespace std;

class fraction
{
private:
	int numerator;
	int denominator;
public:
	void Setfraction() {
		char ch = '/';
		cout << "Введите дробь в формате (a/b) : ";
		cin >> numerator >> ch >> denominator;
		cout << "Вы ввели : " << numerator << "/" << denominator << endl;
	}
	void Sum(fraction first, fraction second) {
		numerator = first.numerator * second.denominator + second.numerator * first.denominator;
		denominator = first.denominator * second.denominator;
		
	}
	void Getfraction() {
		cout << numerator << "/" << denominator << endl;
	}
};



int main()
{
	setlocale(LC_ALL, "Rus");
	fraction fra1, fra2, result;
	while (true) {
		fra1.Setfraction();
		fra2.Setfraction();
		result.Sum(fra1, fra2);
		cout << "Сумма = "; result.Getfraction();
	}
}
