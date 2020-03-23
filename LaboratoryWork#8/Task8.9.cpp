#include <iostream>
#include <string>

using namespace std;

class publication {
private:
	string title;
	float price;
public:
	void getdata() {

		cout << "\nEnter title: "; cin >> title;

		cout << "Enter price: "; cin >> price;
	}
	void putdata() const {

		cout << "\nTitle: " << title;

		cout << "\nPrice: " << price;
	}

};

class publication2 : private publication {
private: 
	string release;
public:
	void getdata() {
		cout << "Enter Release date: "; cin >> release;
		publication::getdata();
	}
	void putdata() const {
		cout << "\nRelease date: " << release;
		publication::putdata();
	}
};

class book : private publication2 {
private:
	int pages;
public:
	void getdata() {

		publication2::getdata();

		cout << "Enter number of pages: "; cin >> pages;
	}

	void putdata() const {
		publication2::putdata();

		cout << "\nPages: " << pages;
	}

};


class tape : private publication2 {
private:
	float time;
public:

	void getdata() {

		publication2::getdata();

		cout << "Enter playing time: "; cin >> time;
	}

	void putdata() const {

		publication2::putdata();

		cout << "\nPlaying time: " << time;
	}

};


int main()
{
	setlocale(LC_ALL, "Rus");
	book book1;

	tape tape1;

	book1.getdata();

	tape1.getdata();

	book1.putdata();

	tape1.putdata();

	cout << endl;

	return 0;

}