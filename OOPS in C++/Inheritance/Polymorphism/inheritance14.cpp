
// Run time polymorphism

// Multilevel Inheritance using function overriding 

#include<iostream>
using namespace std;

class A
{
    protected:
        int a;
    public:
        virtual void set()
       {
           cout<<"\nA a : ";
           cin>>a;
       }

        virtual void display()
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
    A *aptr;
    aptr = &aobj;
    aptr -> set();
    aptr -> display();

    B bobj;
    aptr = &bobj;
    aptr -> set();
    aptr -> display();

    aptr = new C;
    aptr -> set();
    aptr -> display();
    
    return 0;
}

