#include <iostream>
#include <cstring> //for strcpy(), etc
#include <cctype> //for toupper()

using namespace std;

class String {
private:
	char* str; //pointer to string
public:

	String(const char* s) {

		int length = strlen(s); 

		str = new char[length + 1];

		//strcpy(str, s);
		for (int i = 0; i < length; i++)
			str[i] = s[i];
		str[length] = '\0';
	}

	~String() {
		delete str;
	}

	void display() {
		cout << str;
	}

	void upit();

};

void String::upit() {

	char* ptrch = str; //pointer to this string

	while (*ptrch) {

		*ptrch = toupper(*ptrch); //uppercase each character

		ptrch++; //move to next character

	}

}


int main()

{

	String s1 = "He who laughs last laughs best.";

	cout << "\ns1="; //display string

	s1.display();

	s1.upit(); //uppercase string

	cout << "\ns1="; //display string

	s1.display();

	cout << endl;

	return 0;

}