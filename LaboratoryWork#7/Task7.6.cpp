#include <iostream>

using namespace std;

class time {
private:
	int hrs, mins, secs;
public:
	time() : hrs(0), mins(0), secs(0) 
	{ } 

	time(int h, int m, int s) : hrs(h), mins(m), secs(s)
	{ }

	void display() {
		cout << hrs << ":" << mins << ":" << secs;
	}
	time operator + (time t2) { 

		int s = secs + t2.secs; 

		int m = mins + t2.mins; 

		int h = hrs + t2.hrs; 
		if (s > 59) { 
			s -= 60; m++;
		} 

		if (m > 59) { 
			m -= 60; h++;
		}
		return time(h, m, s); 
	}
	time operator - (time t2) { 

		int s = secs - t2.secs;

		int m = mins - t2.mins; 

		int h = hrs - t2.hrs; 
		if (s < 0) {
			s += 60; m--;
		} 

		if (m < 0) {
			m += 60; h--;
		} 
		return time(h, m, s);
	}
	time operator * (time value) {
		time result;
		result.hrs = this->hrs * value.hrs;
		result.mins = this->mins * value.mins;
		result.secs = this->secs * value.secs;
		result.mins += result.secs / 60;
		result.secs %= 60;
		result.hrs += result.mins / 60;
		result.mins %= 60;
	}
	time& operator ++() {
		hrs++;
		mins++;
		secs++;
		return *this;
	}
	time& operator ++(int other) {
		time temp = *this; // temp(*this);
		hrs++;
		mins++;
		secs++;
		return temp;
	}
	time& operator --() {
		hrs--;
		mins--;
		secs--;
		return *this;
	}
	time& operator --(int other) {
		time temp = *this; // temp(*this);
		hrs--;
		mins--;
		secs--;
		return temp;
	}
};

int main()
{
	time time1(5, 59, 59); 

	time time2(4, 30, 30); 

	time time3; 

	time3 = time1 + time2;

	cout << "time3 = "; time3.display();

	cout << endl;

	return 0;
}