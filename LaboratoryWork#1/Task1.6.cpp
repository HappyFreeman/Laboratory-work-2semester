#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float dollar;
	cin >> dollar;
	cout << "Фунт : " << dollar / 1.487 << endl
		<< "Франк : " << dollar / 0.172 << endl
		<< "Немецкие марки : " << dollar / 0.584 << endl
		<< "Японские Йен : " << dollar / 0.00955 << endl;

}
