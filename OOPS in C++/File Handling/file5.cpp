
// Program to read 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream rdata("num.txt");

    int no;

    cout<<"\nNumbers : \n";

    while(1)
    {
        rdata >> no;

        if( rdata.eof() )
        {
            break;
        }

        cout<<no<<"  ";
    }

    rdata.close();
    
    return 0;
}