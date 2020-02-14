#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
	char ch;
	unsigned long total = 0;
	cout << "Enter a number : ";
	while ((ch = _getche()) != '\r')
		total = total * 10 + ch - '0';
	cout << "\nNumber is : " << total << endl;	
}
