#include <iostream>

using namespace std;

struct link {
	int data; //data item
	link* next; //pointer to next link
};


class linklist {
private:
	link* first;
public:
	linklist() {
		first = NULL;
	} 

	void additem(int d);
	void display(); 
};

void linklist::additem(int d) { // надо разобраться не полностью понимаю шо происходит)

	link* newlink = new link;
	newlink->data = d;
	if (first)
	{
		link* p = first;
		while (p->next)
			p = p->next;
		p->next = newlink;
	}
	else
		first = newlink;
	newlink->next = NULL;

}

void linklist::display() {

	link* current = first; //set ptr to first link

	while (current != NULL) {

		cout << current->data << endl; //print data

		current = current->next; //move to next link
	}
}

int main()
{
	linklist li; //make linked list

	li.additem(25); //add four items to list

	li.additem(36);

	li.additem(49);

	li.additem(64);

	li.display(); //display entire list

	return 0;

}