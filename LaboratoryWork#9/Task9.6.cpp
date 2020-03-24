#include <iostream>
#include <string>

using namespace std;

int Strcmp(const char * s1,const char * s2) {
	if (*s1 >= 65 && *s2 >= 65) {
		if (*s1 < *s2) return -1;
		else
			if (*s1 > *s2) return 1;
			else
				return 0;
	}
	throw exception("Почему первый символ ни букавка?");

}

int main()
{
	char* s1 = new char[255]{ "zaaaa" }; // no Russia
	char* s2 = new char[255]{ "aaaaa" }; // no Russia
	*s1 = toupper(*s1);
	*s2 = toupper(*s2);
	cout << Strcmp(s1, s2) << endl;
	
}
