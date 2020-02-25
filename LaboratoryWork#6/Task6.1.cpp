#include <iostream>
#include <string>
#include "windows.h"

using namespace std;

void reversit(string str) {
	int len = str.length(); // длина строки
	for (int i = 0; i < len / 2; i++) { // переворачиваем строку
		char temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
	}
	cout << str << endl;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	cout << "Введите строку : ";
	string str;
	getline(cin, str);

	reversit(str);
}
