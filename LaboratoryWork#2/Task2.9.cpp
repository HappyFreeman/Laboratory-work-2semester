#include <iostream>

using namespace std;

int main()
{
	int places, guests;
	setlocale(LC_ALL, "Rus");
	cout << "Введите число гостей : ";
	cin >> guests;
	cout << "Введите количество мест : ";
	cin >> places;
	int ways = 1;
	for (int i = 1; i <= places; i++) 
		ways *= guests--;
	cout << ways;
}
