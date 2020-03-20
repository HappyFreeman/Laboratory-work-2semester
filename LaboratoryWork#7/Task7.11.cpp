#include <iostream>

using namespace std;

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

}; 

int main()
{
	sterling first(5,1,9), second(2.5), result;
	result = first + second;
	result.GetSterling();
	cout << endl;
	result = first / second;
	result.GetSterling();
}
