#include "../include/arrayQueue.h"
#include <iostream>
using namespace std;


template <class T>
void arrayQueue<T>::enqueue(T data)
{
    if (isEmpty())
    {
        frontIndex = backIndex = 0;
        arr[backIndex] = data;
    }
    else
    {
        backIndex = (backIndex + 1) % total;
        arr[backIndex] = data;
    }
}

template <class T>
T arrayQueue<T>::dequeue()
{
    if (frontIndex == backIndex)
    {
        T temp = arr[frontIndex];
        frontIndex = backIndex = -1;
        return temp;
    }
    else
    {
        T temp = arr[frontIndex];
        frontIndex = (frontIndex + 1) % total;
        return temp;
    }
}

template <class T>
bool arrayQueue<T>::isEmpty()
{
    if (frontIndex == -1 && backIndex == -1)
    {
        return true;
    }
    return false;
}

template <class T>
bool arrayQueue<T>::isFull()
{
    if (frontIndex == ((backIndex + 1) % total))
    {
        return true;
    }
    return false;
}

template <class T>
T arrayQueue<T>::front()
{
    if (isEmpty())
    {
        return -1;
    }
    return arr[frontIndex];
}

template <class T>
T arrayQueue<T>::back()
{
    if (isEmpty())
    {
        return -1;
    }
    return arr[backIndex];
}

template <class T>
void arrayQueue<T>::display()
{
    int i = frontIndex;
    if (isEmpty())
    {
        cout << "Queue is empty";
        return;
    }
    else
    {
        cout<<"_____\n";
        while (i != backIndex)
        {
            cout << " | "<<arr[i] << " |\n_____\n";
            i = (i + 1) % total;
        }
    }
    cout << arr[i];
}
template class arrayQueue<float>;