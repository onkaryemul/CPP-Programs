//Nesting of Objects

#include<iostream>
#include "arr.h"
using namespace std;

class Result
{
    int rno;
    Array mrk;
    public:
        Result()
        {
            rno=0;
        }

        ~Result(){}

        void setData()
        {
            cout<<"\nRoll No. : ";
            cin>>rno;
            mrk.setData();
        }

        void display()
        {
            cout<<"\nResult\nRoll No. : "<<rno;
            mrk.display();

            cout<<"\nTotal : "<<mrk.total();
            cout<<"\nAverage : "<<mrk.avg();
        }

        int getNo()
        {
            return rno;
        }

        int getTotal()
        {
            return mrk.total();
        }

        int getAvg()
        {
            return mrk.avg();
        }

};


int main()
{
    Result vp;

    vp.setData();
    vp.display();
    
    return 0;
}