
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
            Student :: setData();

            cout<<"\nEnter Marks : ";
            cin>>mrk;
        }

      /*
        void setData()
        {
            cout<<"\nRoll No. : ";
            cin>>no;

            cout<<"\nName : ";
            cin>>nm;

            cout<<"\nMarks : ";
            cin>>mrk;
        }
      */
        
        void setData(int a)
        {
            Student :: setData(a);

            cout<<"\nMarks : ";
            cin>>mrk;
        }

      /* 
        void setData(int a)
        {
            no = a;

            cout<<"\nName : ";
            cin>>nm;

            cout<<"\nMarks : ";
            cin>>mrk;
        }
      */

        void display()
        {
            Student :: display();

            cout<<"\nMarks : "<<mrk;
        }

      /*
        void display()
        {
            cout<<"\nRoll No. : "<<no
                <<"\nName : "<<nm
                <<"\nMarks : "<<mrk;
        }
      */
     
        int getMarks()
        {
            return mrk;
        }
};


int main()
{
    Result r;

    r.setData();

    r.display();
    
    return 0;
}


