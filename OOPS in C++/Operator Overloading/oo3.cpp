
#include<iostream>
using namespace std;

class Number
{
    int no;
    public:
        Number()
        {
            no = 0;
        }

        Number(int a)
        {
            no = a;
        }

        Number(Number & t)
        {
            no = t.no;
        }

        ~Number() {}

        friend istream & operator >> (istream & in , Number & t)
        {
            cout<<"\nEnter No. : ";
            in>>t.no;

            return in;
        }

        friend ostream & operator << (ostream & out , Number & t)
        {
            out<<"\nNo. : "<<t.no;

            return out;
        }

        Number operator + (Number & t)
        {
            Number k( no + t.no );

            return k;
        }

        Number operator - (Number & t)
        {
            Number k( no - t.no);

            return k;
        }

        friend Number operator + (int val , Number & t )
        {
            Number k( val + t.no);

            return k;
        }

        friend Number operator - (int val , Number & t )
        {
            Number k( val - t.no);

            return k;
        }

        Number operator ++ () // ( ) -> pre-increment 
        {
            no++;

            return *this;
           
           /* 
              Number k(++no);  // Pre-increment

              return k;
           */
        }

        // int -> placeholder
        Number operator ++ (int) // (int) -> post increment
        {
            Number k(no++); // Post-increment

            return k;
        }
        
        void operator - ()
        {
            no = -no;
        }

        Number operator += (int n)
        {
            no = no + n;

            return *this;
        }

        Number operator -= (int n)
        {
            no = no - n;

            return *this;
        }

        int operator == (int n)
        {
            return (no == n);
        }

        int operator == (Number & k)
        {
            return (no == k.no);
        }

};

/*
int main()
{
    Number p(7), q;

    q = ++p;

    cout << p << q;

    q = p++;

    cout << p << q;

    return 0;
}
*/

int main()
{
    Number a(5) , b;

    cout << a << b;

    -a;

    cout << a << b;
    
    -a;

    cout << a << b;

    a+=3;

    cout << a;

    if(a == 8)
    {
        cout<<"\nMatch\n";
    }
    else
    {
        cout<<"\nNot Match\n";
    }

    return 0;
}



