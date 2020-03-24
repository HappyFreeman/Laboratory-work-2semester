#include <iostream>
#include <string>

using namespace std;

class publication {
private:
	string title;
	float price;
public:
	virtual void getdata() {

		cout << "\nEnter title: "; cin >> title;

		cout << "Enter price: "; cin >> price;
	}

	virtual void putdata() {

		cout << "\n\nTitle: " << title;

		cout << "\nPrice: " << price;
	}
};


class book : public publication {
private:

	int pages;

public:

	void getdata() override {

		publication::getdata();

		cout << "Enter number of pages: "; cin >> pages;
	}

	void putdata() override {

		publication::putdata();

		cout << "\nPages: " << pages;
	}

};


class tape : public publication {
private:
	float time;
public:

	void getdata() override {

		publication::getdata();

		cout << "Enter playing time: "; cin >> time;

	}

	void putdata() override {

		publication::putdata();

		cout << "\nPlaying time: " << time;

	}

};

int main()
{
	publication* pubarr[100];

	int n = 0; 

	char choice; 

	do {

		cout << "\nEnter data for book or tape (b/t)? ";

		cin >> choice;

		if (choice == 'b') //make book object

			pubarr[n] = new book; // put in array

		else //make tape object

			pubarr[n] = new tape; // put in array

		pubarr[n++]->getdata(); //get data for object

		cout << " Enter another (y/n)? "; //another pub?

		cin >> choice;

	} while (choice == 'y'); //cycle until not 'y'

	for (int j = 0; j < n; j++) //cycle thru all pubs

		pubarr[j]->putdata(); //print data for pub

	cout << endl;

	return 0;

}