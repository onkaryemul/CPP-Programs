

#include<iostream>
using namespace std;

class B; // forward declaration

class A
{
    int a;

    public:
        void set()
        {
            cout<<"\nA a : ";
            cin>>a;
        }

        void display()
        {
            cout<<"\nA a : "<<a;
        }
    
        void swap(B &);
};

class B
{
    int b;

    public:
        void set()
        {
            cout<<"\nB b : ";
            cin>>b;
        }

        void display()
        {
            cout<<"\nB b : "<<b;
        }
    
    friend void A :: swap(B &);
};


void A :: swap(B & q)
{
    int tmp=a;

    a=q.b;

    q.b=tmp;
}


int main()
{
    A x;
    B y;

    x.set();
    y.set();

    x.display();
    y.display();

    x.swap(y);

    x.display();
    y.display();

    return 0;
}