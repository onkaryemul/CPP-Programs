//Constructors and Destructors

#include<iostream>
using namespace std;

class Number
{
    int x;
    int y;
    public:
        Number()  // Default Constructor
        {
            x=y=0;

            cout<<"\nDefault\n";
        }

        Number(int a)  // Parameterized Constructor with one argumnet
        {
            x=y=a;

            cout<<"\nPara1\n";
        }

        Number(int a,int b) // Parameterized Constructor with two arguments
        {
            x=a;
            y=b;

            cout<<"\nPara2\n";
        }

        Number(Number &t) // Copy Constructor
        {
            x=t.x;
            y=t.y;

            cout<<"\nCopy\n";
        }

        ~Number()  // Destructor
        {
            cout<<"\nDestructor\n";
        }

        void set()
        {
            cout<<"\nx : ";
            cin>>x;

            cout<<"\ny : ";
            cin>>y;
        }

        void set(int a,int b=0)
        {
            x=a;
            y=b;
        }

        int getx()
        {
            return x;
        }

        int gety()
        {
            return y;
        }

        void setx(int a)
        {
            x=a;
        }

        void sety(int b)
        {
            y=b;
        }

        void swap()
        {
            int z=x;
            x=y;
            y=z;
        }

        Number add(Number & t)
        {
          // return Number(x+t.x , y+t.y);
            
            Number k;

            k.setx(x + t.x);
            k.sety(y + t.y);

            return k;
        }

        Number sub(Number & t)
        {
          // return Number(x-t.x , y-t.y);

            Number k;

            k.setx(x - t.x);
            k.sety(y - t.y);

            return k;
        }

        void display()
        {
            cout<<"\nx : "<<x<<"\ny : "<<y<<endl;
        }

};


int main()
{
    Number a;
    Number b(5,7);
    Number c;

    a.set();

    c=a.add(b);

    a.display();
    b.display();
    c.display();

    c.swap();

    c.display();

    return 0;
}


