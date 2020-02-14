#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	float first, last, result;
	char ch;
	do {
		cout << "Введите операнд, операцию и второй операнд : ";
		cin >> first >> ch >> last;
		switch (ch)
		{
		case '+': result = first + last; break;
		case '-': result = first - last; break;
		case '*': result = first * last; break;
		case '/': result = first / last; break;
		}
		cout << "Результат : " << result << endl
			<< "Выполнить ещё одну операцию (y/n)? : ";
		cin >> ch;
	} while (ch == 'y');
}
