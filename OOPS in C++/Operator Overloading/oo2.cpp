
#include<iostream>
#include<string.h>
using namespace std;

class Stu
{
    int rno;
    char nm[15];
    public:
        Stu()
        {
            rno = 0;
            nm[0] = '\0';
        }

        Stu(Stu & t)
        {
            rno = t.rno;
            strcpy( nm , t.nm );
        }

        ~Stu() {}

        int getNo()
        {
            return rno;
        }

        char *getName()
        {
            return nm;
        }
        
        friend istream & operator >> ( istream & in , Stu & b)
        {
            cout<<"\nRoll No. : ";
            in>>b.rno;

            cout<<"\nName : ";
            in>>b.nm;

            return in;
        }

        friend ostream & operator << ( ostream & out , Stu & b)
        {
            out<<"\nRoll No. : "<<b.rno<<"\nName : "<<b.nm;

            return out;
        }

};


int main()
{
    Stu a;

    cin >> a;

    cout << a;

    return 0;
}


