#include <iostream>

using namespace std;

int main()
{
	unsigned int numb;
	unsigned long fact = 1;

	while (true) {
		cout << "Enter a number : ";
		cin >> numb;
		if (numb == 0) break;
		for (int j = numb; j > 0; j--)
			fact *= j;
		cout << "Factorial is " << fact << endl;
		fact = 1;
	}
}
