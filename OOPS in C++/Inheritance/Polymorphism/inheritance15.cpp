
// Run time polymorphism

#include<iostream>
using namespace std;

class dimension
{
    protected:
        int w,h;
    public:
        dimension()
        {
            w = 0;
            h = 0;
        }

        dimension(int a, int b)
        {
            w = a;
            h = b;
        }

        ~dimension() {}

         virtual void area() = 0; // pure virtual function
   //    virtual void area() {}

};

class rect : public dimension
{
    public:
        rect() : dimension() {}

        rect(int a, int b) : dimension(a,b) {}

       ~rect() {}
         
        void area()
        {
            cout<<"\nRectangle area : "<<w*h;
        }

};

class triang : public rect
{
    public:
       triang() : rect() {}

       triang(int a, int b) : rect(a,b) {}

      ~triang() {}

       void area()
       {
           cout<<"\nTriangle area : "<<(w*h)/2;
       }

};


int main()
{
    dimension *dptr;

    dptr = new rect(10,8);

    dptr->area();
    
    return 0;
}