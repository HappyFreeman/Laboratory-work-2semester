#include <iostream>
#include <string> //for string class

using namespace std;

class person 
{
protected:

	string name; //person's name
	double salary;

public:

	void SetPerson() //set the name

	{
		cout << "Enter name: "; cin >> name;
		cout << "Enter salary : "; cin >> salary;
	}

	void GetPerson() const //display the name

	{
		cout << "\nname : " << name << " " << " salary : " << salary;
	}

	string GetName() const //return the name
	{
		return name;
	}
	double GetSalary() const { //return the salary
		return salary;
	}

};

void order_Name(person** pp1, person** pp2) {
	if ((*pp1)->GetName() > (*pp2)->GetName()) {
		person* temp = *pp1;
		*pp1 = *pp2;
		*pp2 = temp;
	}
}

void order_Salary(person** pp1, person** pp2) {
	if ((*pp1)->GetSalary() > (*pp2)->GetSalary()) {
		person* temp = *pp1;
		*pp1 = *pp2;
		*pp2 = temp;
	}
}

void bsort(person** pp, int n,  void order(person** pp1, person** pp2))
{
	int j, k; 

	for (j = 0; j < n - 1; j++) 
		for (k = j + 1; k < n; k++)
			order(pp + j, pp + k); 

}

//void order(person** pp1, person** pp2)
//{
//	if ((*pp1)->GetName() > (*pp2)->GetName()) {
//		person* tempptr = *pp1;
//		*pp1 = *pp2;
//		*pp2 = tempptr;
//	}
//
//}

////////////////////////////////////////////////////////////////

int main()
{
	person* persPtr[100]; 

	int n = 0;

	char choice;

	do {
		persPtr[n] = new person; //make new object
		persPtr[n]->SetPerson(); //set person's name
		n++; //count new person
		cout << "Enter another (y/n)? "; //enter another
		cin >> choice; // person?
	}
	while (choice == 'y'); //quit on 'n'

	cout << "\nUnsorted list:";

	for (int j = 0; j < n; j++) //print unsorted list
	{
		persPtr[j]->GetPerson();
	}

	bsort(persPtr, n, order_Name); //sort pointers

	cout << "\nSorted list by name:";

	for (int j = 0; j < n; j++) //print sorted list
	{
		persPtr[j]->GetPerson();
	}

	cout << endl;

	bsort(persPtr, n, order_Salary);
	cout << "\n\nSorted list by salary:";
	for (int j = 0; j < n; j++)
	{
		persPtr[j]->GetPerson();
	}
	cout << endl;


	return 0;

} 

