#include <iostream>
#include <string>
#include <math.h>

using namespace std;

const string digits = "0123456789.";
class Money;

class sterling {
private:
	long pounds;
	int shillings;
	int pence;

	double decimal;

	void old_new() {
		float temporary = (shillings * 12 + pence) / 2.4;
		while (temporary > 1) temporary /= 10;
		decimal = pounds + temporary;
	}
	void new_old() {
		pounds = (long)(decimal);
		pence = (int)((decimal - pounds) * 100);
		pence *= 2.4;
		shillings = pence / 12;
		pence %= 12;
	}

public:
	sterling() {
		pounds = shillings = pence = decimal = 0;
	}

	sterling(double decimal) {
		this->decimal = decimal;
		pounds = shillings = pence = 0;
		this->new_old();
	}

	sterling(long pounds, int shillings, int pence) {
		this->pence = pence;
		this->pounds = pounds;
		this->shillings = shillings;
		this->old_new();
	}

	sterling operator + (sterling other) {
		sterling result;
		this->old_new();
		other.old_new();
		result.decimal = this->decimal + other.decimal;
		result.new_old();
		return result;
	}

	sterling operator- (sterling other) {
		sterling result;
		this->old_new();
		other.old_new();
		result.decimal = this->decimal - other.decimal;
		result.new_old();
		return result;
	}

	sterling operator* (double other) {
		sterling result;
		this->old_new();
		result = this->decimal * other;
		result.new_old();
		return result;
	}

	sterling operator/ (sterling other) {
		sterling result;
		this->old_new();
		other.old_new();
		result.decimal = this->decimal / other.decimal;
		result.new_old();
		return result;
	}

	sterling operator/ (double other) {
		sterling result;
		this->old_new();
		result.decimal = this->decimal / other;
		result.new_old();
		return result;
	}

	void SetSterling() {
		cout << "Введите количество фунтов: ";
		cin >> pounds;
		cout << "Введите количество шилингов: ";
		cin >> shillings;
		cout << "Введите количество пенсов: ";
		cin >> pence;
	}

	void GetSterling() {
		cout << "" << pounds << "." << shillings << "." << pence;
	}
	double GetDecimalSterling() {
		return decimal;
	}

};

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

};

Money SterlingToMoney(sterling s) {
	return Money(s.GetDecimalSterling() * 50);
}

sterling MoneyToSterling(Money m) {
	return sterling(m.GetMoney() / 50);
}

int main() // $124
{
	Money first("3 124.32$");
	sterling second;
	Money third;
	second = MoneyToSterling(first);
	second.GetSterling();
	third = SterlingToMoney(second);
	cout << endl << third.GetMoney();
}