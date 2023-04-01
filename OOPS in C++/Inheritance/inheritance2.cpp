
// Single Inheritance with private derivation

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
                <<"\nName : "<<nm;
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


class Result : private Student
{
    int mrk;
    public:
        void input()
        {
            setData();
        }

        void output()
        {
            display();
        }

        int readNo()
        {
            return getNo();
        }

        char *rrreadNm()
        {
            return getName();
        }

        void setResult()
        {
            cout<<"\nMarks : ";
            cin>>mrk;
        }

        void displayResult()
        {
            cout<<"\nMarks : "<<mrk<<endl;
        }

        int getMarks()
        {
            return mrk;
        }
        
};


int main()
{
    Result r;

    r.input();
    r.setResult();

    r.output();
    r.displayResult();

    return 0;
}


