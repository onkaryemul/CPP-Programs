
#include<iostream>
using namespace std;

class Student
{
    private:
        int rno;
        char nm[15];

    public: // member functions
        void setData()
        {
            cout<<"\nRoll No.: ";
            cin>>rno;

            cout<<"\nName : ";
            cin>>nm;
        }

        void display()
        {
            cout<<"\nRoll No. : "<<rno;
            cout<<"\nName : "<<nm;
        }

};


int main()
{
    Student a;

    a.setData();

    a.display();
    
    return 0;
}