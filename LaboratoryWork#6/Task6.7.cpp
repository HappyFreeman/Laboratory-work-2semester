#include <iostream>
#include <string>
#include <math.h> // _atold() - не работает нужно stold() но она округляет значение

using namespace std;

class money {
public:
	long double mstoid(string str) {
		/*for (int i = 0; i < len; i++)
			if ((str[i] != '.') && (str[i] != ' '))
				summ.push_back(str[i]);*/
		if (str[0] == '$') str.erase(0, 1);
		int len = str.length();
		int point = 0, k = 0;
		for(int i = len - 1; i >= k; i--)
			if ((str[i] == '.')) {
				if (str[i] == '.' && point == 0) { 
					point++; 
					continue;
				}
				str.erase(i, 1);
				k++;
			}
		cout << str << endl;
		long double coins = stold(str);
		return coins;
	}
};

int main() //    $123.456.789.00
{
	money other;
	long double yes;
	for (int i = 0; i < 2; i++) {
		string temp;
		cout << "Enter : ";
		cin >> temp;
		other.mstoid(temp);
	} 
}