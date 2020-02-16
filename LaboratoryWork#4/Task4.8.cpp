#include <iostream>

using namespace std;

void swap(int &a, int &b) {
	int baf;
	baf = a;
	a = b;
	b = baf;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int first, second;
	cout << "Введите два целых значения : \n";
	cin >> first >> second;
	swap(first, second);
	cout << first << " " << second << endl;
}
