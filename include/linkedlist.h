#ifndef linkedlist_h
#define linkedlist_h

#include <iostream>
class node
{
    public:
    int input;
    node *next;
    node(int data)
    {
        input = data;
        next = NULL;
    }
};

class linkedlist
{
    public:
    node *head;
    linkedlist()
    {
        head= NULL;
    }
    bool isEmpty();
    void addToHead(int);
    void addToTail(int);
    void add(int, int);
    void removeFromHead();
    void remove(int);
    node *retrieve(int);
    bool search(int);
    void display();
};
#endif