#include <iostream>
#include <string>

using namespace std;

class employee {
private:
	string name;
	long number;
public:
	void getdata()    //получить данные от пользователя
	{
		cout << "Введите имя : "; cin >> name;
		cout << "Введите номер : "; cin >> number;
	}
	void putdata()    //вывод данных
	{
		cout << "Имя : " << name << endl
			<< "Номер : " << number << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
	employee emp[100];
	int n = 0;
	char ch;
	do {
		cout << "Введите данные о работнике : " << endl;
		emp[n++].getdata();
		cout << "Продолжить (y/n)? : "; cin >> ch;
	} while (ch != 'n');

	for (int i = 0; i < n; i++) {
		emp[i].putdata();
	}
	cout << endl;
}
