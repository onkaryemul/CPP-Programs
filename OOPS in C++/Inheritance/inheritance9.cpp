
#include<iostream>
using namespace std;

class Theory
{
    protected:
        int t1,t2,t3;
    public:
        Theory()
        {
            t1=t2=t3=0;
        }

        ~Theory() {}

        void set()
        {
            cout<<"\nTheory Marks : \n";
            cin>>t1>>t2>>t3;
        }

        void display()
        {
            cout<<"\nTheory Marks : "
                <<t1<<"  "<<t2<<"  "<<t3;
        }

        int total()
        {
            return (t1+t2+t3);
        }
    
};


class Oral
{
    protected:
        int O1,O2;
    public:
        Oral()
        {
            O1 = O2 = 0;
        }

        ~Oral() {}

        void set()
        {
            cout<<"\nOral Marks : \n";
            cin>>O1>>O2;
        }

        void display()
        {
            cout<<"\nOral Marks : "
                <<O1<<"  "<<O2;
        }

        int total()
        {
            return (O1+O2);
        }

};

// Memory allocation takes place first for Theory class members and then for Oral class
class Student : public Theory , public Oral
{
    protected:
        int no;
        char nm[15];
    public:
        Student() : Theory() , Oral()
        {
            no = 0;
            nm[0] = '\0';
        }

        ~Student() {}

        void set()
        {
            cout<<"\nRoll No. : ";
            cin>>no;

            cout<<"\nName : ";
            cin>>nm;

            Theory :: set();

            Oral :: set();
        }
        
        void display()
        {
            cout<<"\nRoll No. : "<<no;
            cout<<"\nName : "<<nm;

            Theory :: display();
            cout<<"\nTotal : "<< Theory :: total();
            
            Oral :: display();
            cout<<"\nTotal : "<< Oral :: total();
        }

};


int main()
{
    Student a;

    a.set();

    a.display();
    
    return 0;
}