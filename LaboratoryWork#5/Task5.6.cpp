#include <iostream>
#include <string>

using namespace std;

enum etype {
	laborer, secretary, manager, accountant, executive, researcher
};

class date {
private:
	int month;
	int day;
	int year;
public:

	date() {
		month = 0;
		day = 0;
		year = 0;
	}

	void getdate(int m, int d, int y) {
		month = m;
		day = d;
		year = y;
	}

	void getdate() {
		cin >> month >> day >> year;
	}

	void showdate() {
		cout << month << "/" << day << "/" << year << endl;
	}

};

class employee {
private:
	int number;
	float salary;
	date employeeDate;
	etype position;
public:

	employee() {
		number = 0;
		salary = 0;
	}

	employee(int n, float s) {
		number = n;
		salary = s;
	}

	void SetEmployee() {
		cout << "Введите данные о сотрудниках : " << endl;
		cin >> number >> salary;
	}

	void Display() {
		cout << number << "\t" << salary << endl;
	}

	void getemploy() {
		char place;
		cout << "Введите индетификационный номер сотрудника : ";
		cin >> number;
		cout << "Введите зарплату сотрудника : ";
		cin >> salary;
		cout << "Дата принятия на работу (мм/дд/гггг): ";
		employeeDate.getdate();
		cout << "Введите первую букву должности: ";
		cin >> place;
		switch (place)
		{
		case 'l': position = laborer; break;
		case 's': position = secretary; break;
		case 'm': position = manager; break;
		case 'a': position = accountant; break;
		case 'e': position = executive; break;
		case 'r': position = researcher; break;
		}

	}

	void putemploy() {
		string type;
		switch (position)
		{
		case laborer: type = "laborer"; break;
		case secretary: type = "secretary"; break;
		case manager: type = "manager"; break;
		case accountant: type = "accountant"; break;
		case executive: type = "executive"; break;
		case researcher: type = "researcher"; break;
		}
		cout << "Зарплата сотрудника под номером " << number << " " << salary << endl;
		cout << "Он устроился "; employeeDate.showdate(); 
		cout << "Он является " << type;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	employee em;
	em.getemploy();
	em.putemploy();
}