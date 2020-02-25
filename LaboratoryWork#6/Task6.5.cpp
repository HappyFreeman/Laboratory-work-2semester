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
	fraction operator /(int other) {
		this->denominator *= other;
		return *this;
	}
	void Getfraction() {
		cout << this->numerator << "/" << this->denominator << " ";
	}
	void Setfraction() {
		cin >> numerator >> denominator;
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
	
};


int main()
{
	setlocale(LC_ALL, "Rus");
	fraction fra[100];
	fraction total(0, 1), average;
	int count = 0;
	char ch;
	do {
		cout << "Введите числитель и знаменатель : \n";
		fra[count++].Setfraction();
		cout << "Продолжить (y/n)? : ";
		cin >> ch;
	} while (ch != 'n');
	for (int i = 0; i < count; i++)
		total = total + fra[i];
	total = total / count;
	cout << "Среднее : "; total.Getfraction();
}
