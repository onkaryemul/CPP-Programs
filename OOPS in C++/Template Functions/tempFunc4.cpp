
// Overloading of template function

#include<iostream>
#include<string.h>
using namespace std;

template<class X>
void display(X & a, X & b)
{
    cout<<"\n"<<a<<"\t"<<b;
}


template<class P>
void xswap(P & a, P & b)
{
    P c = a;
    a = b;
    b = c;
}

void xswap(char *a, char *b)
{
    char t[100];

    strcpy(t,a);
    strcpy(a,b);
    strcpy(b,t);

}


int main()
{
    int a=5, b=20;

    display(a,b);
    xswap(a,b);
    display(a,b);

    char p[20] = "Ganesh";
    char q[20] = "Ram";

    display(p,q);
    xswap(p,q);
    display(p,q);

    return 0;
}



