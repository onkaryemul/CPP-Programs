
// Type conversion from class to class

#include<iostream>
using namespace std;

class Marks
{
    int rno;
    int phy,che,mat;
    public:
        Marks()
        {
            rno = phy = che = mat = 0;
        }

        ~Marks() {}

        void setData()
        {
            cout<<"\nRoll No. : ";
            cin>>rno;

            cout<<"\nMarks : ";
            cin>>phy>>che>>mat;
        }

        void display()
        {
            cout<<"\nRoll No. : "<<rno;
            cout<<"\nMarks : "<<phy<<"\t"<<che<<"\t"<<mat;
        }

        operator int()
        {
            return rno;
        }

        operator double()
        {
            return (phy+che+mat)/3.0;
        }

};

class Result
{
    int no;
    double ptr;
    public:
        Result()
        {
            no = 0;
            ptr = 0.0;
        }

        Result(Marks & t)
        {
          // Type conversion  
            no = t; // Operator int()
            ptr = t; // Operator double()
        }

        Result(Result & t)
        {
            no = t.no;
            ptr = t.ptr;
        }

        ~Result() {}

        void display()
        {
            cout<<"\nRoll No. : "<<no;
            cout<<"\nMarks : "<<ptr;
        }

};


int main()
{
    Marks m;
    m.setData();
    m.display();

    Result r(m);
    r.display();

    return 0;
}


