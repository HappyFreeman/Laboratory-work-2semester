#include <iostream>

using namespace std;

float circarea(float radius) {
	const float PI = 3.14159265f;
	return radius * radius * PI;
}

int main()
{
	float r;
	setlocale(LC_ALL, "Rus");
	cout << "Введите радиус окружности : ";
	cin >> r;
	cout << "Площадь равна : " << circarea(r) << endl;
}
