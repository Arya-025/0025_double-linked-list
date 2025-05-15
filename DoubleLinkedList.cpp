#include <iostream>
#include <string>
using namespace std;

class node
{
public:
    int nomMhs;
    node *next;
    node *prev;
};

class DoubleLinkedList
{
private:
    node *start;

public:
    DoubleLinkedList()
    {
        start = NULL;
    }

    void addnode() {
        int nim;
        string nim;
        cout << "\nEnter the roll number of the student";
        cin >> nim;

        node *newmode = new node();

        
    }

};