
#include<iostream>
using namespace std;

#define M 5

class Array
{
    protected:
        int arr[M];
    public:
        Array();

        ~Array() {}

        void set(int d, int pos)
        {
            arr[pos] = d;
        }

        int get(int pos)
        {
            return arr[pos];
        }

};

Array :: Array()
{
    for(int i=0;i<M;i++)
    {
        arr[i]=0;
    }

}


class Stack : public Array
{
    int top;
    public:
       Stack() : Array()
       {
           top = -1;
       }

       int isFull()
       {
           return (top == M-1);
       }

       int isEmpty()
       {
           return (top == -1);
       }

       void push(int d)
       {
           if(isFull())
           {
               cout<<"\nOverflow\n";
           }
           else
           {
               set(d,++p);  // arr[++top] = d;
           }
       }

       void pop()
       {
           if(isEmpty())
           {
               cout<<"\nUnderflow\n";
           }
           else
           {
               top--;
           }

       }

       void display();

       void menu();

};


class Queue : public Array
{
    int fr,rr;
    public:
        Queue() : Array()
        {
            rr = -1;
            fr = 0;
        }

        ~Queue() {}

        int isFull()
        {
            return ( rr == M-1 );
        }

        int isEmpty()
        {
            return ( rr < fr );
        }

        void insert(int d)
        {
            if(isFull())
            {
                cout<<"\nOverflow\n";
            }
            
        }
        
        void display();

        void menu();

};

void Queue :: display()
{
    if(isEmpty())
    {
        cout<<"\nEmpty Queue\n";
    }
    else
    {
        cout<<"\nQueue Data : \n";
        for(int i=fr;i<=rr;i++)
        {
            cout<<"  "<<get(i);
        }

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

void Stack :: display()
{
    if(isEmpty())
    {
        cout<<"\nEmpty Stack\n";
    }
    else
    {
        cout<<"\nStack Data : \n";
        for(int i=top;i>=0;i--)
        {
            cout<<"  "<<get(i); // arr[i]
        }

    }

}

void Stack :: menu()
{
    int opt,d;

    while(1)
    {
        cout<<"\nStack Menu\n1.Push\n2.Pop\n3.Display\n4.Exit\nOption : ";
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
                push(d);
                break;

            case 2:
                pop();
                break;
            
            case 3:
                display();
                break;

        }

    }

}


int main()
{
    
    cout<<"\nData Structures\n1.Stack\n2.Queue\nChoice : ";
    cin>>opt;

    if( opt<1 || opt>2 )
    {
        return;
    }

    return 0;
}



