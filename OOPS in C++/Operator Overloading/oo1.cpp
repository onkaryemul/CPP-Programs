
// Operator Overloading

/* 
    < opr1 > # < opr2 >
    < # > < opr >  
*/

#include<iostream>
using namespace std;

class Result
{
    int rno;
    int mrk;
    public:
        Result()
        {
            rno = mrk = 0;
        }

        Result(int a, int b)
        {
            rno = a;
            mrk = b;
        }

        Result(Result & t)
        {
            rno = t.rno;
            mrk = t.mrk;
        }

        ~Result() {}

        void set()
        {
            cout<<"\nRoll No. : ";
            cin>>rno;

            cout<<"\nMarks : ";
            cin>>mrk;
        }

        void display()
        {
            cout<<"\nRoll No. : "<<rno<<"\nMarks : "<<mrk;
        }

        int getNo()
        {
            return rno;
        }

        int getMrk()
        {
            return mrk;
        }

        Result operator + (int m)
        {
            Result k( rno , mrk+m );

            return k;
        }

        Result operator - (int m)
        {
            Result k( rno , mrk-m);

            return k;
        }

        int operator > (Result & t)
        {
            return ( rno > t.rno );
        }

        int operator < (Result & t)
        {
            return ( rno < t.rno );
        }

        int operator == (Result & t)
        {
            return ( rno == t.rno );
        }

        int operator > (int m)
        {
            return ( mrk > m );
        }

        int operator < (int m)
        {
            return ( mrk < m);
        }

        int operator == (int m)
        {
            return ( mrk == m );
        }

};


int main()
{
    Result a(5,13) , b;

    a.display();

    b = a + 5;

    b.display();

    if(a > 13)
    {
        a.display();
    }
    else
    {
        b.display();
    }

    return 0;
}


