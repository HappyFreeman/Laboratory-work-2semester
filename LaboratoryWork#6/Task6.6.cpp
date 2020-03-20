#include <iostream>
#include <cstdlib> // srand(), rand()
#include <ctime>


using namespace std;

enum Suit {
	clubs, diamonds, hearts, spades
};

const int jack = 11;
const int queen = 12;
const int king = 13;
const int ace = 14;

class card {
private:
	int number;
	Suit suit;
public:
	card() {}
	void set(int number, Suit suit) {
		this->number = number;
		this->suit = suit;
	}
	void display();
};

void card::display() {
	if (number >= 2 && number <= 10)
		cout << number;
	else
		switch (number)
		{
		case jack: cout << "J"; break;
		case queen: cout << "Q"; break;
		case king: cout << "K"; break;
		case ace: cout << "A"; break;
		}
	switch (suit)
	{
	case clubs: cout << "♣"; break;
	case diamonds: cout << "♦"; break;
	case hearts: cout << "♥"; break;
	case spades: cout << "♠"; break;
	}
}

int main()
{


	card deck[52];
	for (int i = 0; i < 52; i++) {
		int number = (i % 13) + 2; // 2 - 14
		Suit suit = Suit(i / 13); // 0 - 3
		deck[i].set(number, suit);
	}

	cout << "-------\n";
	
	for (int i = 0; i < 52; i++) {
		deck[i].display();
		cout << " ";
		if (!((i + 1) % 13)) cout << endl; // 13 карт в строке
	}

	srand(time(NULL));

	for (int i = 0; i < 52; i++) {
		int k = rand() % 52;
		card temp = deck[i];
		deck[i] = deck[k];
		deck[k] = temp;
	}
	cout << "\n--------------\n";

	for (int i = 0; i < 52; i++) {
		deck[i].display();
		cout << " ";
		if (!((i + 1) % 13)) cout << endl; // 13 карт в строке
	}

}
