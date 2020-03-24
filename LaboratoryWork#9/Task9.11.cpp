#include <iostream>

using namespace std;

const int NUMARRAYS = 10;
const int MAXSIZE = 10;

class Arr {
private:
	int* ap[NUMARRAYS];
public:
	Arr() {
		for (int j = 0; j < NUMARRAYS; j++)
			ap[j] = new int[MAXSIZE];
	}
	int operator [](int n) {
		return ap[n / 10][n % 10];
	}
	void SetArr(int n, int number) {
		ap[n / 10][n % 10] = number;
	}
};

int main()
{
	Arr arr;
	int number = 0;
	for (int i = 0; i < NUMARRAYS * MAXSIZE; i++)
		arr.SetArr(i, number += 10);

	for (int i = 0; i < NUMARRAYS * MAXSIZE; i++) {
		if (i % 10 == 0) cout << endl;
		cout << arr[i] << " ";
	}
}
