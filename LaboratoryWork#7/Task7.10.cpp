#include <iostream>

using namespace std;

class Polar {
private:
	double R;
	double angle;
public:

	Polar() {
		R = 0;
		angle = 0;
	}

	Polar(double R, double angle) {
		this->R = R;
		this->angle = angle;
	}

	Polar operator + (Polar value) {
		double x1, x2, y1, y2;
		double angle, r;
		x1 = R * cos(this->angle);
		x2 = value.R * cos(value.angle);
		y1 = R * sin(this->angle);
		y2 = value.R * sin(value.angle);
		x1 += x2;
		y1 += y2;
		angle = atan(y1 / x1);
		r = sqrt(x1 * x1 + y1 * y1);
		return Polar(r, angle);
	}

	void SetPolar() {
		cout << "Введите Радиус : "; cin >> R; 
		cout << "Введите угол : "; cin >> angle;
	}

	void GetPolar() {
		cout << "Радиус = " << R << endl
			<< "Угол = " << angle << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	Polar first, second, result;
	first.SetPolar();
	second.SetPolar();
	result = first + second;
	result.GetPolar();
}
