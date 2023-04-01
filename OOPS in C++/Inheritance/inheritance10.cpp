
// Implementation of Hybrid Inheritance --> Multilevel and Multiple Inheritance 

#include<iostream>
using namespace std;

class A
{
    protected:
        int no;
    public:
        A()
        {
            no = 0;
        }

        ~A() {}

        void set()
        {
            cout<<"\nRoll No. : ";
            cin>>no;
        }

        void display()
        {
            cout<<"\nRoll No. : "<<no;
        }

        int getNo()
        {
            return no;
        }

};


class B : public A
{
    protected:
        char nm[15];
    public:
        B() : A()
        {
            nm[0]='\0';
        }

        ~B() {}

        void set()
        {
            A :: set();
            
            cout<<"\nName : ";
            cin>>nm;
        }

        void display()
        {
            A :: display();

            cout<<"\nName : "<<nm;
        }

        char *getName()
        {
            return nm;
        }

};


class C
{
    protected:
        int smrk;
    public:
        C() 
        {
            smrk = 0;
        }

        ~C() {}

        void set()
        {
            cout<<"\nSports Marks : ";
            cin>>smrk;
        }

        void display()
        {
            cout<<"\nSports Marks : "<<smrk;
        }

        int getSMrk()
        {
            return smrk;
        }

};


class D : public B , public C
{
    protected:
        int mrk;
    public:
        D() : B(),C()
        {
            mrk = 0;
        }

        ~D() {}

        void set()
        {
            B :: set();

            cout<<"\nTheory Marks : ";
            cin>>mrk;

            C :: set();
        }

        void display()
        {
            B :: display();

            cout<<"\nTheory Marks : "<<mrk;

            C :: display();

            cout<<"\nTotal : "<<mrk+smrk;
        }

};


int main()
{
    D dobj;

    dobj.set();

    dobj.display();

    return 0;
}


