#include <iostream>

using namespace std;

struct phone
{
	int area;
	int exchange;
	int number;
};

int main()
{
	phone ph1 = { 212, 767, 8900 };
	phone ph2;
	cout << "Enter your area code, exchange, and number ";
	cin >> ph2.area >> ph2.exchange >> ph2.number;

	cout << "My number is "
		<< "(" << ph1.area << ")"
		<< ph1.exchange << "-" << ph1.number << endl;
	cout << "Your number is "
		<< "(" << ph2.area << ")"
		<< ph2.exchange << "-" << ph2.number << endl;
}
