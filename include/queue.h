#ifndef queue_h
#define queue_h

#include <iostream>
template <class T>
class queue
{
public:
   int count;
   queue()
   {
      count = 0;
   }
   virtual void enqueue(T data) = 0;
   virtual T dequeue() = 0;
   virtual T front() = 0;
   virtual T back() = 0;
   virtual bool isFull() = 0;
   virtual bool isEmpty() = 0;
   virtual void display() = 0;
   virtual ~queue(){};
};

#endif