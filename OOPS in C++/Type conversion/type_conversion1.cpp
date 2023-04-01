
/*
   Program to demonstrate type conversion from user defined type
   to basic type
*/

#include<iostream>
using namespace std;

#define M 5

class Vector
{
    int x[M];
    public:
        Vector();

        Vector(Vector &);

        ~Vector() {}

        friend istream & operator >> (istream & , Vector &);

        friend ostream & operator << (ostream & , Vector &);

        int calctot();

        operator int()
        {
            return calctot();
        }

        operator double()
        {
            int tot = *this;

            return double(tot)/M;
          // return (double)tot/M;
        }

};

Vector :: Vector()
{
    int i;

    for(i=0;i<M;i++)
    {
        x[i] = 0;
    }

}

Vector :: Vector(Vector & t)
{
    int i;

    for(i=0;i<M;i++)
    {
        x[i] = t.x[i];
    }

}

istream & operator >> (istream & in , Vector & t)
{
    int i;

    cout<<"\nEnter data : \n";
    for(i=0;i<M;i++)
    {
        in >> t.x[i];
    }

    return in;
}

ostream & operator << (ostream & out , Vector & t)
{
    int i;

    cout<<"\nData : \n";
    for(i=0;i<M;i++)
    {
        out << t.x[i] <<"  ";
    }
    
    out << endl;
    
    return out;
}

int Vector :: calctot()
{
    int tot = x[0] , i;

    for(i=1;i<M;i++)
    {
        tot += x[i];
    }

    return tot;
}


int main()
{
    Vector a;

    cin >> a;
    cout << a;

  // Type conversion
    int tot = a;
    double avg = a;

    cout<<"\nTotal : "<<tot<<endl;
    cout<<"\nAverage : "<<avg<<endl;

    return 0;
}


