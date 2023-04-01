//Constructor function definiton outside the class

//Create a header file with name arr.h

// Create new file and demonstrate the use of class Array

#include<iostream>
#include "arr.h"
using namespace std;

int main()
{
    Array k,p;

    k.setData();
    k.display();

    p.setData();
    p.display();

    if(p.isMore(70))
    {
        cout<<"\nA Grade\n";
    }
    else
    {
        cout<<"\nPass Grade\n";
    }

    if(p.isMore(k))
    {
        cout<<"\np is max\n";
    }
    else
    {
        cout<<"\nk is max\n";
    }
    
    return 0;
}


