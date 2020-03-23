#include <iostream>

using namespace std;


class Counter {
protected:
	unsigned int count; 
public:

	Counter() {
		count = 0;
	}

	Counter(int count) {
		this->count = count;
	}

	unsigned int get_count() const {
		return count;
	}

	Counter & operator ++ () {
		this->count++;
		return *this;
	}

	Counter& operator ++ (int other) {
		Counter temp = *this;
		this->count++;
		return temp;
	}

};


class CountDn : public Counter {
public:
	CountDn() : Counter() {

	}

	CountDn(int count) : Counter(count) { 

	}

	CountDn operator -- () {
		this->count--;
		return *this;
	}
	CountDn& operator -- (int other) {
		CountDn temp = *this;
		this->count--;
		return temp;
	}
};



int main()
{
	CountDn a, b(100);

	a++; a++; ++a;

	--b; --b; b--;


	return 0;
}