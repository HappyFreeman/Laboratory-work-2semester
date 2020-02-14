#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	setiosflags(ios::left);
	cout << "Фамилия" << setw(20) << "Имя" << setw(20) << "Адрес" << setw(20) << "Город" << endl << endl
		<< "Петров" << setw(20) << "Василий" << setw(20) << "Кленовая 16" << setw(20) << "Санкт-Петербург" << endl
		<< "Иванов" << setw(20) << "Сергей" << setw(20) << "Осиновая 3" << setw(20) << "Находка" << endl
		<< "Сидоров" << setw(20) << "Иван" << setw(20) << "Березовая 21" << setw(20) << "Калининград" << endl;
}
