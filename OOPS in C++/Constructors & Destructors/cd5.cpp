
// MyTime Class

#include<iostream>
using namespace std;

class MyTime
{
    int h,m,s;
    public:
       MyTime()
       {
           h=m=s=0;
       }

       MyTime(int a , int b=0 , int c=0)
       {
           h=a;
           m=b;
           s=c;
       }

       MyTime(long int z)
       {
           h=z/3600;
           
           z=z%3600;

           m=z/60;

           s=z%60;
       }

       MyTime(MyTime & a)
       {
           h = a.h;

           m = a.m;

           s = a.s;
       }

       ~MyTime() {}

       void setData()
       {
           cout<<"\nH : ";
           cin>>h;

           cout<<"\nM : ";
           cin>>m;

           cout<<"\nS : ";
           cin>>s;
       }

       void setData(int a , int b=0 , int c=0)
       {
           h=a;

           m=b;

           s=c;
       }

       void setData(long int z)
       {
           // *this = MyTime(z);

           h=z/3600;

           z=z%3600;

           m=z/60;

           s=z%60;
       }

       void setData(MyTime & t)
       {
           // *this = t;

           h = t.h;

           m = t.m;

           s = t.s;
       }

       void display()
       {
           cout<<"\nH : "<<h<<"\tM : "<<m<<"\tS : "<<s;
       }

       long int toSeconds()
       {
           return ( h*3600l + m*60 + s );
         // return ( h*(long)3600 + m*60 + s );
       }

       int gethr()
       {
           return h;
       }

       int getmn()
       {
           return m;
       }

       int getss()
       {
           return s;
       }

       int isMore(MyTime & k)
       {
           long int a = toSeconds();

           long int b = k.toSeconds();

           return (a > b);
       }

       int isLess(MyTime & k)
       {
         //  return ( ! isMore(k) ); 

           long int a = toSeconds();

           long int b = k.toSeconds();

           return (a < b);
       }
    
    /* 
       Call from main
       c = a.add(b); 
    */
       
       MyTime add(MyTime & b)
       {
           long int p = toSeconds();

           long int q = b.toSeconds();

           long int r = p + q;

           MyTime k(r);

           return k;
       }

       MyTime sub(MyTime & b)
       {
           long int p = toSeconds();

           long int q = b.toSeconds();

           long int r = labs(p-q);

           MyTime k(r);

           return k;
       }
     
};


int main()
{
    MyTime a,b,c;

    a.setData(18,20);

    b.setData(19);

    c = a.sub(b);

    a.display();
    b.display();
    c.display();

    return 0;
}



