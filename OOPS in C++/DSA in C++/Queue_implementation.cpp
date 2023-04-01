
// Array Implementation of Queue

#include<iostream>
using namespace std;

#define M 5

class Queue
{
    int arr[M];
    int fr,rr;
    public:
       Queue()
       {
           fr=0;
           rr=-1;
       }

       ~Queue() {}

       int isEmpty()
       {
           return (rr < fr);
       }

       int isFull()
       {
           return (rr == M-1);
       }

       void insert(int d)
       {
           if(isFull())
           {
               cout<<"\nOverflow\n";
               return;
           }

           rr++;

           arr[rr]=d;
       }

       void remque()
       {
           if(isEmpty())
           {
               cout<<"\nUnderflow\n";
               return;
           }

           fr++;
       }

       void display();
       
       void menu();
};

void Queue :: display()
{
    int i;

    if(isEmpty())
    {
        cout<<"\nEmpty Queue\n";
        return;
    }

    cout<<"\nQueue Data :\n";
    for(i=fr;i<=rr;i++)
    {
        cout<<"  "<<arr[i];
    }

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
            case 1:
                cout<<"\nData : ";
                cin>>d;
                insert(d);
                break;

            case 2:
                remque();
                break;

            case 3:
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


