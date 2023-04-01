
// Program to read the text file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("pqr.txt");

    char ch;

    if( ! in )
    {
        cout<<"\nFile Not Found\n";
        return 0;
    }

    while(1)
    { 
        in >> ch;

        if(in.eof())
        {
            break;
        }

        cout<<ch;
    }

    in.close(); 

    return 0;
}


