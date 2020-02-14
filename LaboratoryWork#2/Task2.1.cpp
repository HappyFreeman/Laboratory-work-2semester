#include <iostream>

using namespace std;

int main()
{
	unsigned long n;

	cout << "Enter a number : ";
	cin >> n;
	for (int i = 0; i < 200; i++) {
		cout << i * n << "";
		if (i % 10 == 0) cout << endl;
	}
}
