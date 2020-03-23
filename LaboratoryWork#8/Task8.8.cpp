#include <iostream>
#include <string>
#include <cstring> // strcpy()

using namespace std;

class String {
protected:
	const static int SZ = 100;
	char str[SZ];
public:
	String() {
		str[0] = '\0';
	}
	String(const char str[]) {
		//strcpy(this->str, str);
		for (int j = 0; j < strlen(str); j++) {
			this->str[j] = str[j];
		}
		this->str[strlen(str)] = '\0';
	}
	void display() const {
		cout << str;
	}
	/*operator char* () {
		return str;
	}*/
};

class Pstring : public String {
public:

	Pstring() : String() {

	}

	Pstring(const char str[]) : String() {
		if (strlen(str) > SZ - 1) {
			for (int j = 0; j < SZ - 1; j++) {
				this->str[j] = str[j];
			}
			this->str[SZ - 1] = '\0';
		}
		else
		{
			for (int j = 0; j < strlen(str); j++) {
				this->str[j] = str[j];
			}
			this->str[strlen(str)] = '\0';
		}
	}

	Pstring Left(int count) {
		Pstring temp;
		int k = 0;
		for (int i = 0; i < count; i++) {
			temp.str[k++] = this->str[i];
		}
		temp.str[k] = '\0';
		return temp;
	}
	Pstring Right(int count) {
		Pstring temp;
		int k = 0;
		for (int i = strlen(this->str) - count; i < strlen(this->str); i++) {
			temp.str[k++] = this->str[i];
		}
		temp.str[k] = '\0';
		return temp;
	}
	Pstring Mid(int count, int elementary) {
		Pstring temp;
		int k = 0;
		for (int i = elementary; i < elementary + count; i++) {
			temp.str[k++] = this->str[i];
		}
		temp.str[k] = '\0';
		return temp;
	}
};

int main()
{
	setlocale(LC_ALL, "Rus"); // limit = 100;
	Pstring s1 = "Hello, World!";
	Pstring s2 = "qwerty";
	Pstring temp;
	temp = s1.Left(5);
	temp.display(); cout << endl;
	temp = s1.Right(3);
	temp.display(); cout << endl;
	temp = s2.Mid(3, 2);
	temp.display(); cout << endl;
}
