#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Введите число десятичных фунтов : ";
	int pounds, shillings, pense;
	char qwerty;
	cin >> pounds >> qwerty >> pense;
	pense *= 2.4;
	shillings = pense / 12;
	pense %= 12;
	cout << "В старой форме : " << pounds << "." << shillings << "." << pense << endl;
}
