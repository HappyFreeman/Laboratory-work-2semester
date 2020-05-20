#include <iostream>
#include <cstring> //for strcpy(), strlen()
#include <process.h> //for exit()

using namespace std;

class String {
private:
	enum { SZ = 80 }; 
	char str[SZ]; 
public:
	String() {
		str[0] = '\0';
	}

	String(const char s[]) {
		if (strlen(s) >= SZ) exit(1);
		for (int i = 0; i < strlen(s); i++)
			str[i] = s[i];
		str[strlen(s)] = '\0';
	}

	void display() {
		cout << str;
	}

	String operator += (String ss) {

		if (strlen(str) + strlen(ss.str) >= SZ)

		{
			cout << "\nString overflow"; exit(1);
		}
		char temp[SZ];

		for (int i = 0; i < strlen(str); i++)
			temp[i] = str[i];
		temp[strlen(str)] = '\0';
		for (int i = 0; i < strlen(ss.str);i++)
			temp[i + strlen(str)] = ss.str[i];
		temp[strlen(str) + strlen(ss.str)] = '\0';
		for (int i = 0; i < strlen(temp); i++)
			str[i] = temp[i];
		str[strlen(temp)] = '\0';
		return String(str); 
	}

};

int main()
{
	String s1 = "Merry Christmas!\0";

	String s2 = "Happy new year!\0"; 

	String s3; 

	s3 = s1 += s2; 
	
	cout << "\ns1="; s1.display(); //display s1

	cout << "\ns2="; s2.display(); //display s2

	cout << "\ns3="; s3.display(); //display s3

	cout << endl;

	return 0;
}