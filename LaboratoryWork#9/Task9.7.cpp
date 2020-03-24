#include <iostream>
#include <string> //for string class

using namespace std; 
					


class person {
protected:

	string name; //person's name
	float salary;

public:

	void setData() {
		cout << "Enter name: "; cin >> name;
		cout << "Enter salary: "; cin >> salary;
	}

	float getSalary() {
		return salary;
	}

	void printData() {
		cout << endl << name << " " << salary;
	}

	string getName() {
		return name;
	}

};


int main()
{

	void bsort(person**, int); //prototype
	void order(person * *pp1, person * *pp2);
	void salsort(person * *pp, int n);

	person* persPtr[100]; //array of pointers to persons

	int n = 0; //number of persons in array

	char choice; //input char

	do { //put persons in array

		persPtr[n] = new person; //make new object

		persPtr[n]->setData(); //set person's name

		n++; //count new person

		cout << "Enter another (y/n)? "; //enter another

		cin >> choice; // person?

	}

	while (choice == 'y'); //quit on 'n'

	cout << "\nUnsorted list:";

	for (int j = 0; j < n; j++) //print unsorted list

	{
		persPtr[j]->printData();
	}

	//bsort(persPtr, n); //sort pointers

	salsort(persPtr, n);

	cout << "\nSorted list:";

	for (int j = 0; j < n; j++) //print sorted list
	{
		persPtr[j]->printData();
	}

	cout << endl;

	return 0;

} //end main()

//--------------------------------------------------------------

void bsort(person** pp, int n) {

	void order(person**, person**); //prototype

	int j, k; //indexes to array

	for (j = 0; j < n - 1; j++) //outer loop

		for (k = j + 1; k < n; k++) //inner loop starts at outer

			order(pp + j, pp + k); //order the pointer contents

}

//--------------------------------------------------------------

void order(person** pp1, person** pp2) {

	if ((*pp1)->getName() > (*pp2)->getName()) {

		person* tempptr = *pp1; //swap the pointers

		*pp1 = *pp2;

		*pp2 = tempptr;

	}

}

void salsortQ(person** pp1, person** pp2) {
	if ((*pp1)->getSalary() > (*pp2)->getSalary()) {
		person* tempptr = *pp1;
		*pp1 = *pp2;
		*pp2 = tempptr;
	}

}

void salsort(person** pp, int n) {
	for (int j = 0; j < n - 1; j++)
		for (int k = j + 1; k < n; k++)
			salsortQ(pp + j, pp + k);
}