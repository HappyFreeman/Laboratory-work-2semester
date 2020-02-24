#include <iostream>
#include <cmath>

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
		cout << this->numerator << "/" << this->denominator << endl;
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
		if(tden == 0) { 
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

int main()
{
	fraction first(3,2), second(1,2), result;
	result = first + second;
	result.Getfraction();
}
