#include <iostream>
#include <string>

using namespace std;

class employee {
private:
	string name;
	unsigned long number;
public:
	void getdata() {
		cout << "\n Enter last name: "; cin >> name;
		cout << " Enter number: "; cin >> number;
	}
	void putdata() const {
		cout << "\n Name: " << name;
		cout << "\n Number: " << number;
	}
};

class employee2 : private employee { // в задание прост добавить поле)
private:
	enum period { hourly, weekly, monthly };
	double compensation;
public:

};

int main()
{
    
}
