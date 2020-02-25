#include <iostream>

using namespace std;

class Distance {
private:
	int feet;
	float inches;
public:
	Distance() {
		feet = inches = 0;
	}
	Distance(int feet, float inches) {
		this->feet = feet;
		this->inches = inches;
	}
	void showdist() {
		cout << "Фунты : " << feet << endl
			<< "Дюймы : " << inches << endl;
	}
	void getdist() {
		cout << "Введите футы : "; cin >> feet;
		cout << "Введите дюймы : "; cin >> inches;
	}
	void add_dist(Distance d2, Distance d3) {
		inches = d2.inches + d3.inches;
		feet = 0;
		if (inches >= 12.0) {
			inches -= 12.0;
			feet++;
		}
		feet += d2.feet + d3.feet;
	}
	void div_dist(Distance d2, int divisor) {
		float fitfeet = d2.feet + d2.inches / 12.0;
		fitfeet /= divisor;
		feet = int(fitfeet);
		inches = (fitfeet - feet) * 12.0;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	Distance dist[100];
	Distance total(0, 0.0), average;
	int count = 0;
	char ch;
	do {
		cout << "Введите расстояние : \n";
		dist[count++].getdist();
		cout << "Продолжить (y/n)? : ";
		cin >> ch;
	} while (ch != 'n');
	for (int i = 0; i < count; i++)
		total.add_dist(total, dist[i]);
	average.div_dist(total, count);
	cout << "Среднее : ";
	average.showdist();
}
