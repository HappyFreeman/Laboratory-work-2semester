#include <iostream>

using namespace std;

int main()
{

	float flarr[100]; 

	char ch; 

	int num = 0; 

	do {

		cout << "Enter number: "; //get numbers from user

		cin >> *(flarr + num++); //until user answers 'n'  --- flarr[num++]

		cout << " Enter another (y/n)? ";

		cin >> ch;

	} while (ch != 'n');

	float total = 0.0; 

	for (int k = 0; k < num; k++) 
		total += *(flarr + k); // flarr[k]

	float average = total / num; 

	cout << "Average is " << average << endl;

	return 0;

}