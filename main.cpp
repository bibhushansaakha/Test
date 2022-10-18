#include "./include/arrayQueue.h"
#include "./include/linkedlistQueue.h"

#include <iostream>
using namespace std;
int main()
{
    int type,choice;
    arrayQueue<float> aQ;
    linkedlistQueue<float> lQ;
    float data;

    while (choice!=0)
    {
        cout<<"\n\n------------\n-----QUEUE----\n\n------------\n";
        cout<<"\nWhat Operation would you like to perform: \n[1] Enque \n[2] Deque \n[3] Check if Empty \n[4] Check if Full \n[5] Print Item at Front \n[6] Print Item at Rear \n[0] Quit \n>>>";
        cin>>choice;
        if (choice==1)
        {
            cout<<"\nDo you want to Enque data in \n[1]Array Queue or \n[2]Linked List Queue\n>>>";
            cin>>type;
            if (type==1)
            {
                cout<<"\nEnter data to be Enqued\n>>>";
                cin>>data;
                aQ.enqueue(data);
            }
            else if (type==2)
            {
                cout<<"\nEnter data to be Enqued\n>>>";
                cin>>data;
                lQ.enqueue(data);
            }
            else
            {
                cout<<"\nInvalid Input\n";
            }
        }
        
        else if (choice==2)
        {
            cout<<"\nDo you want to Deque data from \n[1]Array Queue or \n[2]Linked List Queue\n>>>";
            cin>>type;
            if (type==1)
            {
                aQ.dequeue();
                cout<<"\nDequed from Array Queue\n";
            }
            else if (type==2)
            {
                lQ.dequeue();
                cout<<"\nDequed from Linkedlist Queue\n";
            }
            else
            {
                cout<<"\nInvalid Input\n";
            }
        }
        
        else if (choice==3)
        {
            cout<<"\nDo you want to check data in \n[1]Array Queue or \n[2]Linked List Queue\n>>>";
            cin>>type;
            if (type==1)
            {
                if (aQ.isEmpty()==true)
                {
                    cout<<"\nThe Queue is Empty\n";
                }
                else
                {
                    cout<<"\nThe Queue is not Empty\n";
                }
            }
            else if (type==2)
            {
                if (lQ.isEmpty()==true)
                {
                    cout<<"\nThe Queue is Empty\n";
                }
                else
                {
                    cout<<"\nThe Queue is not Empty\n";
                }
            }
            else
            {
                cout<<"\nInvalid Input\n";
            }
        }

        else if (choice==4)
        {
            cout<<"\nDo you want to check data in \n[1]Array Queue or \n[2]Linked List Queue\n>>>";
            cin>>type;
            if (type==1)
            {
                if (aQ.isFull()==true)
                {
                    cout<<"\nThe Queue is Full\n";
                }
                else
                {
                    cout<<"\nThe Queue is not Full\n";
                }
            }
            else if (type==2)
            {
                if (lQ.isFull()==true)
                {
                    cout<<"\nThe Queue is Full\n";
                }
                else
                {
                    cout<<"\nThe Queue is not Full\n";
                }
            }
            else
            {
                cout<<"\nInvalid Input\n";
            }
        }
        
        else if (choice==5)
        {
            cout<<"\nDo you want to print data from \n[1]Array Queue or \n[2]Linked List Queue\n>>>";
            cin>>type;
            if (type==1)
            {
                aQ.front();
            }
            else if (type==2)
            {
                lQ.front();
            }
            else
            {
                cout<<"\nInvalid Input\n";
            }
        }

        else if (choice==6)
        {
            cout<<"\nDo you want to print data from \n[1]Array Queue or \n[2]Linked List Queue\n>>>";
            cin>>type;
            if (type==1)
            {
                aQ.front();
            }
            else if (type==2)
            {
                lQ.front();
            }
            else
            {
                cout<<"\nInvalid Input\n";
            }
        }

        else if (choice==0)
        {
            cout<<"\n------------\n\nThankyou for using this Program\n\n------------\n";
        }
        

        else
        {
            cout<<"\nInvalid Input\n";
        }
        
    }
    
}