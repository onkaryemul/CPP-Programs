
// Create a header file with name "NODE.h"

// Create a new file

// Stack Implementation using NODE.h

#include<iostream>
#include "NODE.h"
using namespace std;

// class to implement stack

class Stack
{
    NODE *top;
    public:
       Stack()
       {
          top = NULL;
       }

       ~Stack() ;

       void push(int d)
       {
           top = new NODE(d , top);
       }

       void pop()
       {
           if(top == NULL)
           {
               cout<<"\nUnderflow\n";
           }
           else
           {
               NODE *a = top;

               top = a->getNext();

               delete a;
           }

       }

       void display();

       void menu();

};


Stack :: ~Stack()
{
    NODE *a = top;

    while(top != NULL)
    {
        top = top->getNext();

        delete a;

        a = top;
    }

}

void Stack :: display()
{
    NODE *a = top;

    if(top == NULL)
    {
        cout<<"\nEmpty Stack\n";
    }
    else
    {
        cout<<"\nData : \n";

        while( a != NULL)
        {
            cout <<"  "<< a->getData();

            a = a->getNext();
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
    Stack s;

    s.menu();

    return 0;
}


