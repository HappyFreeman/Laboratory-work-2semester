#include <iostream>
#include <string>
using namespace std;

class Publication {
private:
    string title;
    float price;
public:
    virtual void SetData() {
        cout << " \nEnter title: ";
        cin >> title;
        cout << " Enter price: ";
        cin >> price;
    }
    virtual void GetData() {
        cout << "\n\nTitle : " << title;
        cout << "\nPrice : " << price;
    }
};

class Book : public Publication {
private:
    int pages;
public:
    void SetData() override {
        Publication::SetData();
        cout << "Enter number pages : "; cin >> pages;
    }
    void GetData() override {
        Publication::GetData();
        cout << "\nPages : " << pages;
    }
};

class Tape : public Publication {
private:
    float time;
public:
    void SetData() override {
        Publication::SetData();
        cout << "Enter playing time : "; cin >> time;
    }
    void GetData() override {
        Publication::GetData();
        cout << "\nTime : " << time;
    }
};

int main()
{
    const int SIZE = 10;
    Publication* arr[SIZE];
    int n = 0;
    char c;
    do {
        cout << "\nEnter data for book or tape (b/t)? : ";
        cin >> c;
        if (c == 'b') arr[n] = new Book;
        else
            arr[n] = new Tape;
        arr[n++]->SetData();
        cout << "resume (y/n)? : ";
        cin >> c;
    } while (c == 'y');

    for (int i = 0; i < n; i++)
        arr[i]->GetData();

}
