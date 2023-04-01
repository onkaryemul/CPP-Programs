
// Program to read the binary file

#include<iostream>
#include<fstream>
#include "book.h"
using namespace std;


int main()
{
    Book b;

    ifstream bin;
                       // reading
    bin.open("book.dat", ios::in | ios::binary);

    while(1)
    {
        bin.read((char *)&b,sizeof(Book));

        if(bin.eof())
        {
            break;
        }

        cout<<b;
    }

    bin.close();
    
    return 0;
}



