#include <iostream>

using namespace std;

class angle {
private:
	int degrees;
	float minutes;
	char direction;
public:
	angle(int deg, float min, char dir) {
		degrees = deg;
		minutes = min;
		direction = dir;
	}
	void mainQ() {
		int deg;
		float min;
		char dir;
		cout << "..." << endl;
		cin >> deg >> min >> dir;
		angle variable(deg, min, dir);
		cout << variable.degrees << '\xF8' << variable.minutes << "' " << variable.direction << endl;
	}
};

int main()
{
	angle variable(0, 0, 'E');
	while (true) {
		variable.mainQ();
	}
}
