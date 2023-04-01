
//  Queue Implementation using NODE.h

#include<iostream>
#include "NODE.h"
using namespace std;

// class to implement Queue

class Queue
{
    NODE *fr,*rr;
    public:
        Queue()
        {
            fr = rr = NULL;
        }

        ~Queue();

        void insert(int d);
        void remque();
        void display();
        void menu();
};


void Queue :: insert(int d)
{
    NODE *a = new NODE(d);

    if(fr == NULL)
    {
        fr = a;
    }
    else
    {
        rr->setNext(a);
    }

    rr = a;
}

void Queue :: remque()
{
    if(fr == NULL)
    {
        cout<<"\nUnderflow\n";
        return;
    }

    NODE *a=fr;

    if(fr == rr)
    {
        fr = rr = NULL;
    }
    else
    {
        fr = a->getNext();
    }

    delete a;
}

void Queue :: display()
{
    if(fr == NULL)
    {
        cout<<"\nEmpty Queue\n";
        return;
    }

    NODE *a = fr;

    cout<<"\nData : \n";
    while(a != NULL)
    {
        cout<<"  "<< a->getData();

        a = a->getNext();
    }

}

Queue :: ~Queue()
{
    NODE *a = fr;

    while( fr != NULL)
    {
        fr = a->getNext();

        delete a;

        a = fr;
    }

    rr = NULL;
}

void Queue :: menu()
{
    int opt,d;

    while(1)
    {
        cout<<"\nQueue Menu\n1.Insert\n2.Remove\n3.Display\n4.Exit\nOption : ";
        cin>>opt;

        if(opt>3)
        {
            break;
        }

        switch(opt)
        {
            case 1 :
                cout<<"\nData : ";
                cin>>d;
                insert(d);
                break;

            case 2 :
                remque();
                break;

            case 3 :
                display();
                break;
        }

    }

}


int main()
{
    Queue q;

    q.menu();

    return 0;
}


