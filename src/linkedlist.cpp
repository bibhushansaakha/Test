#include <iostream>
#include "../include/linkedlist.h"
using namespace std;

bool linkedlist::isEmpty()
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return true;
    }
    cout << "Not Empty List" << endl;
    return false;
}

void linkedlist::addToHead(int input)
{
    node *n = new node(input);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void linkedlist::addToTail(int input)
{
    node *n = new node(input);
    if (head == NULL)
    {
        head = n;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}


void linkedlist::add(int input, int pre)
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    node *n = new node(input);
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->input == pre)
        {
            n->next = temp->next;
            temp->next = n;
            return;
        }
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "No predecessor" << endl;
    }
}


void linkedlist::removeFromHead()
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    node *toDelete = head;
    head = head->next;
    delete toDelete;
}


void linkedlist::remove(int removeinput)
{
    node *temp = head;
    if (temp == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    if (temp->input == removeinput)
    {
        temp = temp->next;
        removeFromHead();
        return;
    }
    while (temp->next != NULL)
    {
        if (temp->next->input == removeinput)
        {
            node *toDelete = temp->next;
            temp->next = temp->next->next;
            delete toDelete;
            return;
        }
        temp = temp->next;
    }
    if (temp->next == NULL)
    {
        cout << "The input does not exist" << endl;
    }
}

node *linkedlist::retrieve(int input)
{
    node *temp = head;
    if (temp == NULL)
    {
        cout << "The Linked List is empty" << endl;
        return NULL;
    }
    while (temp != NULL)
    {
        if (temp->input == input)
        {
            return temp;
        }
        temp = temp->next;
    }
    return NULL;
}


bool linkedlist::search(int key)
{
    node *temp = head;
    while (temp != NULL)
    {
        if (temp->input == key)
        {
            cout << key << " is found" << endl;
            return true;
        }
        temp = temp->next;
    }
    cout << key << " is not found" << endl;
    return false;
}

void linkedlist::display()
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->input << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
