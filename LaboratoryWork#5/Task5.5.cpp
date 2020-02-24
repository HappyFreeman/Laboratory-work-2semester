#include <iostream>

using namespace std;

class date {
private:
	int month;
	int day;
	int year;
public:
	
	date() {
		month = 0;
		day = 0;
		year = 0;
	}

	void getdate(int m, int d, int y) {
		month = m;
		day = d;
		year = y;
	}

	void showdate() {
		cout << month << "/" << day << "/" << year << endl;
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
	date date1;
	date1.getdate(12, 31, 02);
	date1.showdate();
}
