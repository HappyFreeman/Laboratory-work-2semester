#include <iostream>
#include <cstring> //for strcmp(), etc.

using namespace std;

const int DAYS = 7; //number of pointers in array

void bsort(char** pp, int n) //sort pointers to strings

{

	void order(char**, char**); //prototype

	int j, k; //indexes to array

	for (j = 0; j < n - 1; j++) //outer loop

		for (k = j + 1; k < n; k++) //inner loop starts at outer

			order(pp + j, pp + k); //order the pointer contents

}

//--------------------------------------------------------------

void order(char** pp1, char** pp2) //orders two pointers

{ //if string in 1st is

	if (strcmp(*pp1, *pp2) > 0) //larger than in 2nd,

	{

		char* tempptr = *pp1; //swap the pointers

		*pp1 = *pp2;

		*pp2 = tempptr;

	}

}

int main()
{
	char* arrptrs[DAYS];// = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday" };
	arrptrs[0] = new char[7] {"Sunday"};
	arrptrs[1] = new char[7] {"Monday"};
	arrptrs[2] = new char[8] {"Tuesday"};
	arrptrs[3] = new char[10] {"Wednesday"};
	arrptrs[4] = new char[9] {"Thursday"};
	arrptrs[5] = new char[7] {"Friday"};
	arrptrs[6] = new char[9] {"Saturday"};

	cout << "\nUnsorted:\n";

	for (int j = 0; j < DAYS; j++) //display unsorted strings

		cout << *(arrptrs + j) << endl;

	bsort(arrptrs, DAYS); //sort the strings

	cout << "\nSorted:\n";

	for (int j = 0; j < DAYS; j++) //display sorted strings

		cout << *(arrptrs + j) << endl;

	return 0;

}
