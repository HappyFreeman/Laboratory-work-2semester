#include <iostream>

using namespace std;

class ship {
private:
	int number;

	int degrees;
	float minutes;
	char direction;
public:
	void SetShip() {
		cout << "Введите номер коробля : ";
		cin >> this->number;
		cout << "Введите координаты (пример ввода : 149 34.8 W) : ";
		cin >> degrees >> minutes >> direction;
	}
	void GetShip() {
		cout << "Номер коробля : " << number << endl
			<< degrees << "°" << minutes << "' " << direction << endl;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus");
	ship vessel;
	vessel.SetShip();
	vessel.GetShip();
}
