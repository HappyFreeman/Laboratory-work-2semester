#include <iostream>

using namespace std;

int main()
{
	int N = 20;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if ((N - i) > j) cout << " ";
			else cout << "X";
		}
		cout << endl;
	}

}
