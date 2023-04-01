
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
        int a;

    public:
        B() : A()
        {
            a = 0;
        }

        ~B() {}

        void set()
        {
            A :: set();

            cout<<"\nB b : ";
            cin>>a;
        }

        void display()
        {
            A :: display();

            cout<<"\nB b : "<<a;
        }

};


class C : public B
{
    protected:
        int a;

    public:
        C() : B()
        {
            a = 0;
        }

        ~C() {}

        void set()
        {
            B :: set();

            a = A::a + B::a;
        }

        void display()
        {
            B :: display();

            cout<<"\nC c : "<<a;
        }

};


int main()
{
    C cobj;

    cobj.set();

    cobj.display();

    return 0;
}


