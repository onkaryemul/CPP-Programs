//Member function definitions outside the class

#include<iostream>
using namespace std;

class Student
{
    int rno;
    char nm[15];
    double mrk;

    public:
        void setData();
        void display();

        int getNo()
        {
            return rno;
        }

        double getMarks()
        {
            return mrk;
        }

};

void Student::setData()
{
    cout<<"\nRoll No.: ";
    cin>>rno;

    cout<<"\nName : ";
    cin>>nm;

    cout<<"\nMarks : ";
    cin>>mrk;
}

void Student::display()
{
    cout<<"\nRoll No.: "<<rno<<"\nName : "<<nm<<"\nMarks : "<<mrk<<"\n";
}


int main()
{
    Student a;
    a.setData();
    a.display();

    Student b;
    b.setData();

    cout<<"\nRoll No. : "<<b.getNo();
    cout<<"\nMarks : "<<b.getMarks()<<"\n";

    return 0;
}
