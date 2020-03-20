#include <iostream>

using namespace std;

const int LIMIT = 10;

class safearay {
private:
	int a[LIMIT];
public:
	void putel(int index, int value) {
		if (index >= 0 && index < LIMIT) {
			this->a[index] = value;
		}
	}
	int getel(int index) {
		if (index >= 0 && index < LIMIT) {
			return a[index];
		}
		else return NULL;
	}

};

int main()
{
	safearay sal;
	int temp = 12345;
	sal.putel(7, temp);
	temp = sal.getel(7.4);
}
