#include <iostream>

using namespace std;

int main()
{
	float contribution, rate;
	int years;
	setlocale(LC_ALL, "Rus");
	cout << "Введите начальный вклад : ";
	cin >> contribution;
	cout << "Введите число лет : ";
	cin >> years;
	cout << "Введите процентную ставку : ";
	cin >> rate;
	for (int i = 0; i < years; i++)
		contribution += contribution * rate / 100;
	cout << "Вы получите : " << contribution << endl;
}
