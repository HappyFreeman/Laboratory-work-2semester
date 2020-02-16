#include <iostream>

using namespace std;

struct point {
	int x;
	int y;
};

int main()
{
	point p1, p2, p;
	cout << "Enter cootdinates for p1 : ";
	cin >> p1.x >> p1.y;
	cout << "Enter cootdinates for p2 : ";
	cin >> p2.x >> p2.y;
	p.x = p1.x + p2.x;
	p.y = p1.y + p2.y;
	cout << "Coordinater of p1 + p2 are : "
		<< p.x << "," << p.y << endl;
}
