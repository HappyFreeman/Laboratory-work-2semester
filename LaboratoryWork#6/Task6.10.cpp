#include <iostream>
#include <stdlib.h> // exit();
using namespace std;



class Matrix {
private:
	const static int LIMIT_ROW = 10;
	const static int LIMIT_COLUMN = 10;
	int row;
	int column;
	int a[LIMIT_ROW][LIMIT_COLUMN];
public:
	Matrix() {
		row = LIMIT_ROW;
		column = LIMIT_COLUMN;
	}
	Matrix(int row, int column) {
		if (row >= 0 && row < LIMIT_ROW && column >= 0 && column < LIMIT_COLUMN) {
			this->row = row;
			this->column = column;
		}
		else
			exit(1);
	}
	void putel(int r, int c, int value) {
		if (r >= 0 && r < LIMIT_ROW && c >= 0 && c < LIMIT_COLUMN) {
			this->a[r][c] = value;
		}
		else
			exit(1);
	}
	int getel(int r, int c) {
		if (r >= 0 && r < LIMIT_ROW && c >= 0 && c < LIMIT_COLUMN){
			return a[r][c];
		}
		else 
			exit(1);
	}

};

int main()
{
	Matrix sal;
	int temp = 12345;
	sal.putel(7, 8, temp);
	temp = sal.getel(7.4, 3.6);
}
