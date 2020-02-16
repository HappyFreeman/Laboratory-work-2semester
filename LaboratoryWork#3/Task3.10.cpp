#include <iostream>

using namespace std;

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

int main()
{
	double old;
	setlocale(LC_ALL, "Rus");
	cout << "Введите значение денежной суммы в новых десятичных фунтах : ";
	cin >> old;
	sterling young;
	young.pounds = (int)old;
	young.pence = (int)((old - young.pounds) * 100);
	young.pence *= 2.4;
	young.shillings = young.pence / 12;
	young.pence %= 12;
	cout << "В старой форме : " << young.pounds << "." << young.shillings << "." << young.pence << endl;

}
