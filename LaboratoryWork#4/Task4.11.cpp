#include <iostream>

using namespace std;

struct sterling {
	int pounds;
	int shillings;
	int pence;
};

sterling enter(sterling money) {

	cout << "Введите количество фунтов : ";
	cin >> money.pounds;
	cout << "Введите количество шиллингов : ";
	cin >> money.shillings;
	cout << "Введите количество пенсов : ";
	cin >> money.pence;
	return money;
}

sterling sum(sterling first, sterling second) {
	sterling result;
	result.pence = first.pence + second.pence;
	result.shillings = first.shillings + second.shillings + result.pence / 12;
	result.pence %= 12;
	result.pounds = first.pounds + second.pounds + result.shillings / 20;
	result.shillings %= 20;
	return result;
}

void print(sterling money) {
	cout << money.pounds << " " << money.shillings << " " << money.pence << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	sterling first = { 0 ,0 ,0 }, second = { 0, 0, 0 }, result = { 0, 0, 0 };
	first = enter(first);
	second = enter(second);
	print(sum(first, second));
}
