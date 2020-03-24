#include <iostream>
#include <string>

using namespace std; // в место bool я испоьзовал void )))

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

	virtual void isQveersize() {
		cout << "Превышение размера!\n";
	}

};


class book : public publication {
private:

	int pages;

public:

	void getdata() override {

		publication::getdata();

		cout << "Enter number of pages: "; cin >> pages;
		isQveersize();
	}

	void putdata() override {

		publication::putdata();

		cout << "\nPages: " << pages;
	}

	void isQveersize() override {
		if (pages > 800) publication::isQveersize();
	}

};


class tape : public publication {
private:
	float time;
public:

	void getdata() override {

		publication::getdata();

		cout << "Enter playing time: "; cin >> time;
		isQveersize();
	}

	void putdata() override {

		publication::putdata();

		cout << "\nPlaying time: " << time;

	}

	void isQveersize() override {
		if (time > 90) publication::isQveersize();
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
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