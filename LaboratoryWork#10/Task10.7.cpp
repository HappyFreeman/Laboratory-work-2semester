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
	Money operator- (Money other) {
		return Money(money + other.money);
	}
	Money operator* (long double other) {
		return Money(money * other);
	}
	long double operator/ (Money other) {
		return money / other.money;
	}
	Money operator/ (long double other) {
		return Money(money / other);
	}
	friend Money operator * (long double, Money);
	friend Money operator / (long double, Money);
	friend Money round(Money );
};

Money operator * (long double number, Money m) {
	return Money(number + m.money);
}

Money operator / (long double number, Money m) {
	return Money(number + m.money);
}

Money round(Money other) {
	long double fractpart, // дробная часть
				intpart;	// целая часть
	fractpart = modfl(other.money, &intpart);
	//cout << fractpart << " " << intpart << endl;
	if (fractpart < 0.50) return Money(intpart);
	else return Money(++intpart);
}

int main() // $124
{
	Money first("3 124.32$"), second("10 341.51");
	Money result;
	result = round(first);
	cout << result.GetMoney() << endl;
	result = round(second);
	cout << result.GetMoney() << endl;
}