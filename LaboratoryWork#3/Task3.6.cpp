#include <iostream>

using namespace std;

enum etype {
	laborer, secretary, manager,accountant, executive, researcher
};

int main()
{
	setlocale(LC_ALL, "Rus");
	char first;
	etype type;
	cout << "Введите первую букву должности: ";
	cin >> first;

	switch (first)
	{
	case 'l': type = laborer; break;		
	case 's': type = secretary; break;		
	case 'm': type = manager; break;	
	case 'a': type = accountant; break;	
	case 'e': type = executive; break;
	case 'r': type = researcher; break;
	}

	string employee;
	switch (type)
	{
	case laborer: employee = "laborer"; break;	
	case secretary: employee = "secretary"; break;	
	case manager: employee = "manager"; break;	
	case accountant: employee = "accountant"; break;	
	case executive: employee = "executive"; break;		
	case researcher: employee = "researcher"; break;		
	}

	cout << "Вы выбрали " << employee;
}