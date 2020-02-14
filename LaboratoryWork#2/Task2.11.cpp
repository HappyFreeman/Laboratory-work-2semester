#include <iostream>

using namespace std;

int main()
{
	int pounds1, shillings1, pence1;
	int pounds2, shillings2, pence2;
	int pounds, shillings, pence;
	char ch = 'y';
	char sign;
	setlocale(LC_ALL, "Rus");
	do {
		cout << "Введите операцию : ";
		cin >> sign;
		switch (sign) {
		case '+':
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
			cout << "Всего: " << pounds << " " << shillings << " " << pence << endl;
			break;
		case'-':
			cout << "Введите первую сумму : ";
			cin >> pounds1 >> shillings1 >> pence1;
			cout << "Введите вторую сумму : ";
			cin >> pounds2 >> shillings2 >> pence2;
			pounds = pounds1 - pounds2;
			shillings = shillings1 - shillings2;
			pence = pence1 - pence2;
			if (pence < 0) {
				shillings--;
				pence += 12;
			}
			if (shillings < 0) {
				pounds--;
				shillings += 20;
			}
			cout << "Всего: " << pounds << " " << shillings << " " << pence << endl;
			break;
		case'*':
			float multiplication;
			cout << "Введите сумму : ";
			cin >> pounds >> shillings >> pence;
			cout << "Введите число : ";
			cin >> multiplication;
			pounds *= multiplication;
			shillings *= multiplication;
			pence *= multiplication;
			shillings += pence / 12;
			pence %= 12;
			pounds += shillings / 20;
			shillings %= 20;
			cout << "Всего: " << pounds << " " << shillings << " " << pence << endl;
			break;
		default: cout << "Down?" << endl;
		}
		cout << "Выполнить ещё одну операцию (y/n)? : ";
		cin >> ch;
	} while (ch == 'y');
}
