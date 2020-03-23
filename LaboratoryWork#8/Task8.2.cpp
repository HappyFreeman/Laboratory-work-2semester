#include <iostream>
#include <string>
#include <cstring> // strcpy()

using namespace std;

class String {
protected:
	const static int SZ = 10;
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
	Pstring(const char str[]) : String() {
		if (strlen(str) > SZ - 1) {
			for (int j = 0; j < SZ - 1; j++) {
				this->str[j] = str[j];
			}
			this->str[SZ-1] = '\0';
		}
		else
		{
			for (int j = 0; j < strlen(str); j++) {
				this->str[j] = str[j];
			}
			this->str[strlen(str)] = '\0';
		}
	}
};

int main()
{
	setlocale(LC_ALL, "Rus"); // limit = 10;
	Pstring s1 = "Hello, World!";
	Pstring s2 = "qwerty";
	s1.display();
	cout << endl;
	s2.display();
}
