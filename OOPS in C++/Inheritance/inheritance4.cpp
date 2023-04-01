
/* 
   Single Inheritance with public derivation :
      1) Use of protected Members
      2) Constructor function
*/

#include<iostream>
#include<string.h>
using namespace std;

class Student
{
    protected:
        int no;
        char nm[15];
    public:
        Student()
        {
            no = 0;
            nm[0] = '\0';
        }

        Student(int a,char *b)
        {
            no = a;
            strcpy(nm,b);
        }
        
        ~Student() {}

        void setData()
        {
            cout<<"\nRoll No. : ";
            cin>>no;
            cout<<"\nName : ";
            cin>>nm;
        }

        void setData(int a)
        {
            no = a;
            cout<<"\nName : ";
            cin>>nm;
        }

        void display()
        {
            cout<<"\nNo. : "<<no
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


class Result : public Student
{
    protected:
        int mrk;
    public:
        Result() : Student()
        {
            mrk = 0;
        }

        Result(int a,char *b,int c) : Student(a,b)
        {
            mrk = c;
        }

        ~Result() {}
        
        void setData()
        {
            cout<<"\nEnter Marks : ";
            cin>>mrk;
        }

        void display()
        {
            cout<<"\nMarks : "<<mrk;
        }

        int getMarks()
        {
            return mrk;
        }

};


int main()
{
    Result r;
   
    r.Student :: setData();
    r.setData();

    r.Student :: display();
    r.display();


    Result a(13,"Ganesh",92);

    a.Student :: display();
    a.display();

    return 0;
}


