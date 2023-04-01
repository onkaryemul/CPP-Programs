

//Function Overloading
//Function Polymorphism
//Use of functions to read private data

#include<iostream>
#include<string.h>
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

        void setData(int);
        void setData(int, char *, double);

};

void Student::setData()
{
    cout<<"\nRoll No. : ";
    cin>>rno;

    cout<<"\nName : ";
    cin>>nm;

    cout<<"\nMarks : ";
    cin>>mrk;
}

void Student::display()
{
    cout<<"\nRoll No. : "<<rno<<"\nName : "<<nm<<"\nMarks : "<<mrk<<"\n";
}

void Student::setData(int a)
{
    rno=a;

    cout<<"\nName : ";
    cin>>nm;

    cout<<"\nMarks : ";
    cin>>mrk;
}

void Student::setData(int a, char *b, double c)
{
    rno=a;

    strcpy(nm,b);

    mrk=c;
}

/*
int main()
{
    Student a;
    a.setData();
    a.display();

    Student b;
    b.setData(101);
    b.display();

    Student c;
    c.setData(1,"Amita",9.2);
    c.display();

    return 0;
}
*/

/*
//Use of new and delete Operator

int main()
{
    Student *a=new Student;

    a->setData(121);

    a->display();

    delete a;

    return 0;
}

*/


//Array of Objects of class type student

int main()
{
    Student a[5];

    int i=0;

    while(i<5)
    {
        a[i].setData();
        
        i++;
    }

    for(i=0;i<5;i++)
    {
        a[i].display();
    }

    return 0;
}


