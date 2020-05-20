#include <iostream>

using namespace std;

class sterling {
protected:
	long pounds;
	int shillings;
	int pence;

	double decimal;

	void old_new() {
		double temporary = (double)(shillings * 12 + pence) / 2.4;
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

class fraction {
protected:
	int numerator;
	int denominator;
public:
	fraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}
	fraction() {
		numerator = 1;
		denominator = 1;
	}
	fraction operator +(fraction other) {
		fraction result;
		result.numerator = this->numerator * other.denominator + this->denominator * other.numerator;
		result.denominator = this->denominator * other.denominator;
		result.lowterms();
		return result;
	}
	fraction operator -(fraction other) {
		fraction result;
		result.numerator = this->numerator * other.denominator - this->denominator * other.numerator;
		result.lowterms();
		result.denominator = this->denominator * other.denominator;
		return result;
	}
	fraction operator *(fraction other) {
		fraction result;
		result.numerator = this->numerator * other.numerator;
		result.denominator = this->denominator * other.denominator;
		result.lowterms();
		return result;
	}
	fraction operator /(fraction other) {
		fraction result;
		result.numerator = this->numerator * other.denominator;
		result.denominator = this->denominator * other.numerator;
		result.lowterms();
		return result;
	}
	bool operator ==(fraction other) {
		other.lowterms();
		this->lowterms();
		return (this->numerator == other.numerator && this->denominator == other.denominator);
	}
	bool operator !=(fraction other) {
		other.lowterms();
		this->lowterms();
		return !(this->numerator == other.numerator && this->denominator == other.denominator);
	}
	void Getfraction() {
		cout << this->numerator << "/" << this->denominator << endl;
	}
	void Setfraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}

	friend class Sterfrac;
protected:
	void lowterms() {
		long tnum, tden, temp, ged;
		tnum = labs(numerator);
		tden = labs(denominator);
		if (tden == 0) {
			cout << "-------";
		}
		else if (tnum == 0) {
			numerator = 0;
			denominator = 1;
			return;
		}

		while (tnum != 0) {
			if (tnum < tden) {
				temp = tnum;
				tnum = tden;
				tden = temp;
			}
			tnum -= tden;
		}
		ged = tden;
		numerator /= ged;
		denominator /= ged;
	}
};

class Sterfrac : public sterling, public fraction {
private:

	/*void old_new() {
		double temporary = (double)(shillings * 12 + pence + (numerator / denominator) ) / 2.4;
		while (temporary > 1) temporary /= 10;
		decimal = pounds + temporary ;
	}
	void new_old() {
		pounds = (long)(decimal);
		double temp = (decimal - pounds) * 100;
		pence = (int)temp;
		temp -= pence;
		temp *= 2.4;
		numerator = (int)temp;
		denominator = 8;
		pence *= 2.4;
		shillings = pence / 12;
		pence %= 12;
		
	}*/
	
public:
	Sterfrac() : sterling() {
		this->numerator = 0;
		this->denominator = 8;
	}
	/*Sterfrac(double decimal) : sterling(decimal) {
		this->numerator = 0;
		this->denominator = 8;
	}*/
	Sterfrac(long pounds, int shillings, int pence, int eighth) : sterling(pounds, shillings, pence) {
		this->numerator = eighth;
		this->denominator = 8;
		this->lowterms();
	}

	Sterfrac operator + (Sterfrac other) {
		Sterfrac temp;
		temp.pounds = this->pounds + other.pounds;
		temp.shillings = this->shillings + other.shillings;
		temp.pence = this->pence + other.pence;
		fraction sum = this->::fraction::operator+(other);
		temp.numerator = sum.numerator;
		temp.denominator = sum.denominator;
		temp.lowterms();
		return temp;
	}

	Sterfrac operator - (Sterfrac other) {
		Sterfrac temp;
		temp.pounds = this->pounds - other.pounds;
		temp.shillings = this->shillings - other.shillings;
		temp.pence = this->pence - other.pence;
		fraction result = this->::fraction::operator-(other);
		temp.numerator = result.numerator;
		temp.denominator = result.denominator;
		temp.lowterms();
		return temp;
	}
	Sterfrac operator * (int other) {
		Sterfrac temp;
		temp.pounds = this->pounds * other;
		temp.shillings = this->shillings * other;
		temp.pence = this->pence * other;
		temp.numerator = this->numerator * other;
		temp.lowterms();
		return temp;
	}
	Sterfrac operator / (int other) {
		Sterfrac temp;
		temp.pounds = this->pounds / other;
		temp.shillings = this->shillings / other;
		temp.pence = this->pence / other;
		temp.numerator = this->denominator * other;
		temp.lowterms();
		return temp;
	}

	void GetSterfrac() {
		cout << pounds << "." << shillings << "." << pence << "-" << numerator << "/" << denominator;
	}

	void SetSterfrac() {
		char c;
		cin >> pounds >> c >> shillings >> c >> pence >> c >> numerator >> c >> denominator;
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");
	Sterfrac first(5, 4, 3, 2);
	first.GetSterfrac(); cout << endl;
	Sterfrac second;
	second.SetSterfrac();
	Sterfrac result;
	result = first + second;
	result.GetSterfrac();
}
