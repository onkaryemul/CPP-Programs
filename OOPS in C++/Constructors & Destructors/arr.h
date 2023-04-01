// Constructor function definition outside the class

// Create a header file with name arr.h

#include<iostream>
using namespace std;

#define M 5

class Array
{
    int x[M];
    public:
        Array(); // Default Constructor
        Array(int); // Parameterized Constructor
        Array(Array &); // Copy Constructor
        ~Array(){} // Destructor

        void setData();
        void display();

        void set(int pos,int d)
        {
            x[pos]=d;
        }
        
        int get(int pos)
        {
            return x[pos];
        }

        int total();

        int avg()
        {
            return total()/M;
        }

        int isMore(Array & t)
        {
            return ( total() > t.total() ); 
        }

        int isMore(int val)
        {
            return (total() > val);
        }

        int isLess(Array & t)
        {
            return ( total() < t.total() );
        }

        int isLess(int val)
        {
            return ( total() < val );
        }

};


int Array::total()
{
    int tot=x[0],i=1;

    while(i<M)
    {
        tot+=x[i];

        i++;
    }

    return tot;
}

Array::Array()
{
    for(int i=0;i<M;i++)
    {
        x[i]=0;
    }
}

Array::Array(int z)
{
    for(int i=0;i<M;i++)
    {
        x[i]=z;
    }
}

Array::Array(Array & t)
{
    for(int i=0;i<M;i++)
    {
        x[i]=t.x[i];
    }
}

void Array::setData()
{
    cout<<"\nData\n";
    for(int i=0;i<M;i++)
    {
        cin>>x[i];
    }
}

void Array::display()
{
    cout<<"\nData\n";
    for(int i=0;i<M;i++)
    {
        cout<<" "<<x[i];
    }
}

// Save this header file

