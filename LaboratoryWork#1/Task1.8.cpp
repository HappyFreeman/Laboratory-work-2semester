#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	cout << "Москва" << setfill('.') << setw(15) << "8425785" << endl;
}
