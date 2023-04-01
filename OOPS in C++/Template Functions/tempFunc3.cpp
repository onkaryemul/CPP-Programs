

#include<iostream>
using namespace std;

template<class P>
void xswap(P & a, P & b)
{
    P c = a;
    a = b;
    b = c;
}

template<class X>
void display(X & a, X & b)
{
    cout<<"\n"<<a<<"\t"<<b;
}


int main()
{
    int a=10, x=20;
    char b='A', y='B';
    double c=9.2, d=9.4;

    display(a,x);
    xswap(a,x);
    display(a,x);

    return 0;
}



