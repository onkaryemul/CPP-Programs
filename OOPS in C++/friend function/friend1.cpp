

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
    
    friend void swap(A &, B &);
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
    
    friend void swap(A &, B &);
};


void swap(A & p, B & q)
{
    int tmp=p.a;

    p.a=q.b;

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

    swap(x,y);

    x.display();
    y.display();

    return 0;
}