#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	int pounds, shillings, pence;
	cout << "Введите количество фунтов : ";
	cin >> pounds;
	cout << "Введите количество шиллингов : ";
	cin >> shillings;
	cout << "Введите количество пенсов : ";
	cin >> pence;
	cout << "Десятичных фунтов : " << pounds << "."<< (int)((shillings * 12 + pence) / 2.4) << endl;
}
