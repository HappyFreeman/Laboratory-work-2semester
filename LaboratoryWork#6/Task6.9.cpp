#include <iostream>

using namespace std;

class queue {
private:
	int head;
	int tail;
	const static int MAX = 100;
	int arr[MAX];

	void Check() {
		if (tail == MAX - 1)
			tail = 0;
		if (head == MAX - 1)
			head = 0;
	}

public:
	queue() {
		head = 0;
		tail = 0;
	}
	void Put(int value) {
		Check();
		arr[tail++] = value;
	}
	int Get() {
		Check();
		return arr[head++];
	}

};

int main()
{
	setlocale(LC_ALL, "Rus");

	queue variable;
	variable.Put(69);
	variable.Put(12);
	variable.Put(8);
	cout << variable.Get() << " "
		<< variable.Get() << " "
		<< variable.Get() << " ";
		
}
