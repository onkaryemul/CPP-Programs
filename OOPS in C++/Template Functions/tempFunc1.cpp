
#include<iostream>
using namespace std;

template<class P>
void display(P & a)
{
    cout<<"\nData : "<<a;
}


int main()
{
    int a = 10;
    char b = 'A';
    double c = 9.2;

    display(a);

    display(b);

    display(c);

    return 0;
}



