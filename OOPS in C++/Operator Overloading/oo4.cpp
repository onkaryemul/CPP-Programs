
#include<iostream>
using namespace std;

class MyTime
{
    int h,m,s;

    long int toSeconds()
    {
        return ( h*3600l + m*60 + s);
     // return ( h*(long)3600 + m*60 + s);
    }

    public:
        MyTime()
        {
            h=m=s=0;
        }

        MyTime(int a , int b=0 , int c=0)
        {
            h = a;
            m = b;
            s = c;
        }

        MyTime(long int z)
        {
            h = z/3600;

            z = z%3600;

            m = z/60;

            s = z%60;
        }

        MyTime(MyTime & t)
        {
            h = t.h;
            m = t.m;
            s = t.s;
        }

        ~MyTime() {}

        friend istream & operator >> (istream & in , MyTime & t)
        {
            cout<<"\nH : ";
            in >> t.h;

            cout<<"\nM : ";
            in >> t.m;

            cout<<"\nS : ";
            in >> t.s;

            return in;
        }

        friend ostream & operator << (ostream & out , MyTime & t)
        {
            out<<"\nH : "<< t.h <<"\tM : "<< t.m <<"\tS : "<< t.s <<endl;

            return out;
        }

};


int main()
{
    MyTime p , q , r;

    cin >> p;
    cout << p;

    cin >> q;
    cout << q;

/*
    r = p+q;
    cout << r;

    if(p > q)
    {
        cout << p;
    }
    else
    {
        cout << q;
    }
*/
}



