
// 

#include<iostream>
#include<fstream>
#include "book.h"
using namespace std;

int main()
{
    Book b;

    ofstream bout;
                        // writing
    bout.open("book.dat", ios::out | ios::binary);

    int flg = 1;

    while(1)
    {
        cin >> b;

        bout.write((char *)&b,sizeof(b)); // Writes class object to file

        cout<<"\nType 0 to stop\n";
        cin>>flg;

        if(flg==0)
        {
            break;
        }
    }

    bout.close();

    return 0;
}
