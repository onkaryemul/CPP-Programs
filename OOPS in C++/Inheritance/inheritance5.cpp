
// Multilevel Inheritance

#include<iostream>
using namespace std;

class A
{
    protected:
        int a;

    public:
        A()
        {
            a = 0;
        }

        ~A() {}

        void set()
        {
            cout<<"\nA a : ";
            cin>>a;
        }

        void display()
        {
            cout<<"\nA a : "<<a;
        }
};


class B : public A
{
    protected:
        int b;

    public:
        B() : A()
        {
            b = 0;
        }

        ~B() {}

        void set()
        {
            A :: set();

            cout<<"\nB b : ";
            cin>>b;
        }

        void display()
        {
            A :: display();

            cout<<"\nB b : "<<b;
        }

};


class C : public B
{
    protected:
        int c;

    public:
        C() : B()
        {
            c = 0;
        }

        ~C() {}

        void set()
        {
            B :: set();

            c = a + b;
        }

        void display()
        {
            B :: display();

            cout<<"\nC c : "<<c;
        }

};


int main()
{
    C cobj;

    cobj.set();

    cobj.display();

    return 0;
}


