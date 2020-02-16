#include <iostream>

using namespace std;

int counter = 0;

void function() {
	cout << "Функцию вызвали " << ++counter << " раз(а)\n";
}

int main()
{
	setlocale(LC_ALL, "Rus");
	for (int i = 0; i < 10; i++)
		function();
}
