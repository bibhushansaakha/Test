#ifndef linkedlistQueue_h
#define linkedlistQueue_h
#include "queue.h"
#include "linkedlist.h"

template <class T>
class linkedlistQueue : public linkedlist, public queue<float>
{
public:
    linkedlist L;
    // node *f = NULL;
    // node *r = NULL;
    linkedlistQueue() {}
    void enqueue(T);
    T dequeue();
    T front();
    T back();
    bool isFull();
    bool isEmpty();
    void display();
    ~linkedlistQueue() {}
};
#endif