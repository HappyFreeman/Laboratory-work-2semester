#include <iostream>
#include <conio.h>

using namespace std;

class toLLBooth {
private:
	unsigned int cars;
	double money;
public:
	toLLBooth() //: cars(0), money(0)
	{
		cars = 0;
		money = 0;
	}
	void payingCar() {
		cars++;
		money += 0.5;
	}
	void nopayCar() {
		cars++;
	}
	void display() {
		cout << "\nMМашины : " <<  cars << endl 
			<< "Деньги : " << money << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	toLLBooth booth1;
	char ch;
	
	

	do {
		ch = _getche();
		if (ch == '0') booth1.nopayCar();
		if (ch == '1') booth1.payingCar();
	} while (ch != 27);
	booth1.display();

}
