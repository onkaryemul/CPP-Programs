

#include<iostream>
using namespace std;

template<class P,class Q>
void display(P & a,Q & b)
{
    cout<<"\nData1 : "<<a<<"  Data2 : "<<b;
}


int main()
{
    int a = 10;
    char b = 'A';
    double c = 9.2;

    display(a,b);

    display(b,c);

    display(c,a);

    return 0;
}




