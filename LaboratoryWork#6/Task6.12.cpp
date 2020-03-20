#include <iostream>
#include <string>
#include <math.h>

using namespace std;

const string digits = "0123456789.";

class Money {
private:
	long double money;
public:
	Money() {
		money = 0;
	}
	Money(string money) {
		this->money = 0;
		SetMoney(money);
	}
	Money(long double money) {
		this->money = money;
	}
	void SetMoney(string money) {
		string numbers;
		for (int c = 0; c < money.length(); c++) {
			if (digits.find(money[c]) != string::npos)
				numbers += money[c];
		}
		//cout << numbers << endl;
		this->money = stold(numbers);
	}
	long double GetMoney() const { 
		return money;
	}
	Money operator+ (Money other) {
		return Money(money + other.money);
	}
};


int main() // $124
{
	Money first("3 124.32$"), second("10 341.21");
	Money result = first + second;
	cout << result.GetMoney();
}