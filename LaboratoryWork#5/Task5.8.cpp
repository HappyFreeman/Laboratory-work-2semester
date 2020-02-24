#include <iostream>

using namespace std;

class quantity {
private:
	static int count;
	int number;
public:
	quantity() {
		number = ++count;
	}

	void Display() {
		cout << number << endl;
	}
};

int quantity::count; // int quantity::count = 0;

int main()
{
	const int N = 5;
	quantity q[N];
	for (int i = 0; i < N; i++) q[i].Display();	
}
