#ifndef arrayqueue_h
#define arrayqueue_h
#define total 10;

#include <iostream>
#include "queue.h"
template <class T>
class arrayQueue : public queue<float>
{
    T *arr;
    int frontIndex;
    int backIndex;

public:
    arrayQueue()
    {
        arr = new T[total];
        frontIndex = -1;
        backIndex = -1;
    }

    void enqueue(T data);

    T dequeue();

    T front();

    T back();

    bool isFull();

    bool isEmpty();

    void display();
    ~arrayQueue() {}
};

#endif