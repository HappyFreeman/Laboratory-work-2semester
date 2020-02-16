#include <iostream>

using namespace std;

void zeroSmaller(int& first, int& second) {
	if (first < second) first = 0;
	else second = 0;
}

int main()
{
	int a, b;
	setlocale(LC_ALL, "Rus");
	cout << "Введите два числa : ";
	cin >> a >> b;
	cout << a << " " << b << endl;
	zeroSmaller(a, b);
	cout << a << " " << b << endl;
}
