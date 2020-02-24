#include <iostream>

using namespace std;

class time {
private:
	int hours;
	int minutes;
	int seconds;
public:
	time() {
		hours = 0;
		minutes = 0;
		seconds = 0;
	}
	time(int h, int m, int s) {
		hours = h;
		minutes = m;
		seconds = s;
	}
	void display() {
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}
	void add_time(time t1, time t2) {
		seconds = t1.seconds + t2.seconds;
		minutes = t1.minutes + t2.minutes;
		hours = t1.hours + t2.hours;
		minutes += seconds / 60;
		seconds %= 60;
		hours += minutes / 60;
		minutes %= 60;
	}

};



int main()
{
	setlocale(LC_ALL, "Rus");
	time time1(4, 43, 17);
	time time2(11, 12, 54);
	time time3;
	time3.add_time(time1,time2);
	time3.display();
}
