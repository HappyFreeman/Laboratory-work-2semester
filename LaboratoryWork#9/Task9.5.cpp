#include <iostream>

using namespace std;

void addarrays(const float * firstArr,const float * secondArr, float* thirdArr, const int N) {
	for (int i = 0; i < N; i++)
		*(thirdArr + i) = *(firstArr + i) + *(secondArr + i);
}

int main()
{
	const int N = 5;
	float arrA[N], arrB[N], arrC[N];
	for (int i = 0; i < N; i++) {
		*(arrA + i) = i + 3;
		*(arrB + i) = i + 10;
	}
	addarrays(arrA, arrB, arrC, N);

	for (int i = 0; i < N; i++)
		cout << *(arrC + i) << " ";
	cout << endl;
}
