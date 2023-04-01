
//function overloading
//function polymorphism
//Use of private member functions
//Class objects as argument to the function
//function returning class objects

#include<iostream>
using namespace std;

class Number
{
    int x,y;

    void swap()
    {
       int z=x;
       x=y;
       y=z;
    }

  public:
    void setData()
    {
        cout<<"\nx : ";
        cin>>x;

        cout<<"\ny : ";
        cin>>y;
    }

    void setData(int x,int y)
    {
        this->x=x;
        this->y=y;
    }
    
  /*
     C++ uses a unique keyword called "this" to represent an object 
     that invokes a member functions."this" is a pointer that points
     to the objects this functions called. This unique pointer is 
     automatically passed to a member functions when it is called. 
     The pointer "this" acts as an implicit argument to all member 
     functions.
  */

    void setData(int a)
    {
        x=y=a;
    }

    void setData(Number & p)
    {
        x = p.x;
        y = p.y;
    }

    void display()
    {
        cout<<"\nx : "<<x;
        cout<<"\ny : "<<y;
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

    void sety(int a)
    {
        y=a;
    }

    void callswap()
    {
        swap();
    }
    
    Number add(Number & t)
    {
        Number k;

        k.x = x + t.x;
        k.y = y + t.y;

        return k;

       /*
          Number k;
          k.setData( x + t.x , y + t.y);
          return k;
       */

       /*
          Number k;
          k.setx(x + t.x);
          k.sety(y + t.y);
          return k;
       */

    }

    Number sub(Number & t)
    {
        Number k;

        k.x = x - t.x;
        k.y = y - t.y;

        return k;

       /*
          Number k;
          k.setData( x - t.x , y - t.y);
          return k;
       */

       /*
          Number k;
          k.setx(x - t.x);
          k.sety(y - t.y);
          return k;
       */
      
    }

};


int main()
{
    
    return 0;
}

