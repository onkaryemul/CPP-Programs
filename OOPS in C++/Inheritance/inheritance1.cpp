
// Single Inheritance with public derivation

#include<iostream>
using namespace std;

class Student
{
    int no;
    char nm[15];
    public:
        void setData()
        {
            cout<<"\nRoll No. : ";
            cin>>no;
            cout<<"\nName : ";
            cin>>nm;
        }

        void display()
        {
            cout<<"\nRoll No. : "<<no
                <<"\nName : "<<nm<<endl;
        }

        int getNo()
        {
            return no;
        }

        char *getName()
        {
            return nm;
        }

};


class Result : public Student
{
    int mrk;
    public:
        void setMarks()
        {
            cout<<"\nMarks : ";
            cin>>mrk;
        }

        void displayResult()
        {
            cout<<"Marks : "<<mrk<<endl;
        }

        int getMarks()
        {
            return mrk;
        }

};


int main()
{
    Student a;
    a.setData();
    a.display();

    Result b;
    b.setData();
    b.setMarks();
    b.display();
    b.displayResult();

    return 0;
}


