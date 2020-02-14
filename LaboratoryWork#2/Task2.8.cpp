#include <iostream>

using namespace std;

int main()
{
	int pounds1, shillings1, pence1;
	int pounds2, shillings2, pence2;
	int pounds, shillings, pence;
	char ch = 'y';
	do {
		setlocale(LC_ALL, "Rus");
		cout << "Введите первую сумму : ";
		cin >> pounds1 >> shillings1 >> pence1;
		cout << "Введите вторую сумму : ";
		cin >> pounds2 >> shillings2 >> pence2;
		pounds = pounds1 + pounds2;
		shillings = shillings1 + shillings2;
		pence = pence1 + pence2;
		shillings = shillings + pence / 12;
		pence %= 12;
		pounds = pounds + shillings / 20;
		shillings %= 20;
		cout << "Всего : " << pounds << " " << shillings << " " << pence << endl
			<< "Продолжить (y/n)? : ";
		cin >> ch;
	} while (ch == 'y');
}
