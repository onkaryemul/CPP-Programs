
// Multilevel Inheritance using function overriding

#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
       void set()
       {
           cout<<"\nA a : ";
           cin>>a;
       }

       void display()
       {
           cout<<"\nA a : "<<a<<endl;
       }
};


class B : public A
{
    protected:
        int b;
    public:
        void set()
        {
            cout<<"\nB b : ";
            cin>>b;
        }

        void display()
        {
            cout<<"\nB b : "<<b<<endl;
        }

};


class C : public B
{
    protected:
        int c;
    public:
        void set()
        {
            A :: set();

            B :: set();
            
            c = a+b;
        }

        void display()
        {
            A :: display();

            B :: display();

            cout<<"\nC c : "<<c<<endl;
        }

};


int main()
{
    A aobj;
    aobj.set();
    aobj.display();

    B bobj;
    bobj.set();
    bobj.display();
    bobj.A :: set();
    bobj.A :: display();

    C cobj;
    cobj.set();
    cobj.display();

    return 0;
}

