// Use of array as a member of class

#include<iostream>
#include<ios>
#include<iomanip>
#define M 5
using namespace std;

class Array
{
   int x[M];

   public:
       void init();
       void setData();
       void setData(Array &);
       void display();
       int calctot();

       int calcavg()
       {
           return calctot()/M;
       }

       int findMax();
       int findMin();
       int search(int);
};


int main()
{
    Array p;
    p.setData();
    p.display();

    Array q;
    q.setData(p);
    q.display();

    cout<<"\nTotal : "<<p.calctot();
    cout<<"\nAvg. : "<<q.calcavg();

    if(q.search(23)==-1)
    {
        cout<<"\nNot Found";
    }
    else
    {
        cout<<"\nFound";
    }

    return 0;
}

void Array::init()
{
    for(int i=0;i<M;i++)
    {
        x[i]=0;
    }

}

void Array::setData()
{
    cout<<"\nData : \n";
    for(int i=0;i<M;i++)
    {
        cin>>x[i];
    }

}

void Array::setData(Array &t)
{
    for(int i=0;i<M;i++)
    {
        x[i]=t.x[i];
    }

}

void Array::display()
{
    cout<<"\nData\n";

    for(int i=0;i<M;i++)
    {
        cout<<setw(4)<<x[i];
    }

}

int Array::calctot()
{
    int tot=x[0],i=1;

    while(i<M)
    {
        tot+=x[i];
        i++;
    }

    return tot;
}

int Array::findMax()
{
    int max=x[0],i=1;

    while(i<M)
    {
        if(x[i]>max)
        {
            max=x[i];
        }

        i++;
    }

    return max;
}

int Array::findMin()
{
    int min=x[0],i=1;

    while(i<M)
    {
        if(x[i]<min)
        {
            min=x[i];   // min=(x[i] < min)? x[i] : min;
        }

        i++;
    }

    return min;
}

int Array::search(int val)
{
    int i=0;

    while(i<M)
    {
        if(x[i]==val)
        {
            break;
        }

        i++;
    }

    if(i==M)
    {
        return -1; 
    }
    else
    {
        return i;
    }
    
  // return (i==M)? -1 : i;
}



