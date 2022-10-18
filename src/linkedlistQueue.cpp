#include "../include/linkedlistQueue.h"
#include <iostream>
using namespace std;
template <class T>
void linkedlistQueue<T>::enqueue(T data)
{
    if (!isFull())
    {
        L.addToTail(data);
        count++;
    }
    else
    {
        cout << "Queue Overflow" << endl;
    }
}
template <class T>

T linkedlistQueue<T>::dequeue()
{
    if (!isEmpty())
    {
        node *n = L.head;
        L.removeFromHead();
        count--;
        return n->data;
    }
    return -1;
}
template <class T>

T linkedlistQueue<T>::front()
{
    if (L.isEmpty())
    {
        return -1;
    }
    return L.head->data;
}
template <class T>

T linkedlistQueue<T>::back()
{
    if (L.isEmpty())
    {
        return -1;
    }
    node *temp = L.head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    return temp->data;
}
template <class T>

bool linkedlistQueue<T>::isEmpty()
{
    if (L.head == NULL)
    {
        return true;
    }
    return false;
}
template <class T>

bool linkedlistQueue<T>::isFull()
{
    if (count == total)
    {
        return true;
    }
    return false;
}
template <class T>

void linkedlistQueue<T>::display()
{
    L.display();
}
template class linkedlistQueue<float>;
