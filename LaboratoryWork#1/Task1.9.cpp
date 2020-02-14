#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	char dummychar;
	setlocale(LC_ALL, "Rus");
	cout << "Введите первую дробь : ";
	cin >> a >> dummychar >> b;
	cout << "Введите вторую дробь : ";
	cin >> c >> dummychar >> d;
	e = a * d + b * c;
	f = b * d;
	cout << "Сумма равна " << e << "/" << f << endl;
}
