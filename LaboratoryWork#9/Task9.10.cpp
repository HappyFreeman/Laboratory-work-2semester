#include <iostream>

using namespace std;

int main()
{
	const int NUMARRAYS = 10;
	int MAXSIZE = 10;
	int* ap[NUMARRAYS];
	int j, k; // ap[j][k] j - номер элемента массива указателей, а к — номер элемента в массиве
	int number = 0;

	for (int j = 0; j < NUMARRAYS; j++)
		ap[j] = new int[MAXSIZE];

	for (j = 0; j < NUMARRAYS; j++)
		for (k = 0; k < MAXSIZE; k++)
			ap[j][k] = number += 10;

	for (j = 0; j < NUMARRAYS; j++) {
		for (k = 0; k < MAXSIZE; k++)
			cout << ap[j][k] << " ";
		cout << endl; // что-бы не в одну строчку все было
	}

}
