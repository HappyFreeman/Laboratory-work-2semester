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

class sales {
private:
	const static int MONTHS = 3;
	float salesArr[MONTHS];
public:
	void getdata() {
		cout << "Enter sales for 3 months\n";
		for (int i = 0; i < MONTHS; i++) {
			cout << "Month " << i + 1 << ": ";
			cin >> salesArr[i];
		}
	}
	void putdata() const {
		for (int j = 0; j < MONTHS; j++) {
			cout << "\n Sales for month " << j + 1 << ": ";
			cout << salesArr[j];
		}
	}
};

class book : private publication, private sales {
private:
	int pages;
public:
	void getdata() {

		publication::getdata();

		cout << "Enter number of pages: "; cin >> pages;

		sales::getdata();
	}

	void putdata() const {
		publication::putdata();

		cout << "\nPages: " << pages;

		sales::putdata();
	}

};


class tape : private publication, private sales {
private:
	float time;
public:

	void getdata() {

		publication::getdata();

		cout << "Enter playing time: "; cin >> time;

		sales::getdata();
	}

	void putdata() const {

		publication::putdata();

		cout << "\nPlaying time: " << time;

		sales::putdata();
	}

};

class disk : private publication {
private:
	char CDorDVD;
public:
	void getdata() {
		publication::getdata();

		cout << "Enter type disk (c/d) : "; cin >> CDorDVD;

	}
	void putdata() const {
		publication::putdata();
		cout << "\nType disk : " << CDorDVD;
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