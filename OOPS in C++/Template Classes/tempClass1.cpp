
#include<iostream>
using namespace std;

template<class T>
class tclass
{
    T var;
    public:
       void setData()
       {
           cout<<"\nData : ";
           cin>>var;
       }

       void display()
       {
           cout<<"\nData : "<<var;
       }
};



int main()
{
    tclass<int> a;
    a.setData();
    a.display();

    tclass<double> b;
    b.setData();
    b.display();

    return 0;
}




