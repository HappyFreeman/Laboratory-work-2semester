#include <iostream>

using namespace std;

class fraction {
private:
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
	void Getfraction() {
		cout << this->numerator << "/" << this->denominator << " ";
	}
	void Setfraction(int numerator, int denominator) {
		this->numerator = numerator;
		this->denominator = denominator;
	}


private:
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
	friend void enumeration(fraction &other, int k);
};

void enumeration(fraction& other, int k) {
	
	fraction f1, f2, f3;
	f1.denominator = f2.denominator = k;
	for (int j = 1; j < k; j++) {
		f1.numerator = j;
		f1.denominator = f2.denominator = k;
		f1.lowterms();
		f1.Getfraction();
	}
	cout << endl;
	for (int i = 1; i < k; i++) {
		f2.numerator = i;
		f2.denominator = k;
		f2.lowterms();
		f2.Getfraction();

		for (int j = 1; j < k; j++) {
			f1.numerator = j;
			f1.denominator = k;
			f3 = f1 * f2;
			f3.lowterms();
			f3.Getfraction();
		}
		cout << endl;
	}
	
}

int main()
{
	int k;
	setlocale(LC_ALL, "Rus");
	cin >> k;
	fraction denominator(1,k);
	enumeration(denominator, k);
}
