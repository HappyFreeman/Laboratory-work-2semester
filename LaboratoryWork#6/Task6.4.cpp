#include <iostream>
#include <string>

using namespace std;

void maxint(int arr[], int N) {
	int max = arr[0], index = 0;
	for (int i = 0; i < N; i++)
		if (arr[i] > max) {
			max = arr[i];
			index = i;
		}
	cout << "Максимум : " << max << " индекс : " << index + 1 << endl;
}

int main()
{
	setlocale(LC_ALL, "Rus");
	int N;
	cout << "Введите количество элементов : "; cin >> N;
	cout << "Введите элемены массива : \n";
	int* arr = new int[N];
	for (int i = 0; i < N;i++)
		cin >> arr[i];
	maxint(arr, N);
}
 n