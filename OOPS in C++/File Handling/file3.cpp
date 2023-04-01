
// Program to copy source file 'pqr.txt' to destination file 'abc.txt'

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream in("pqr.txt");

    if( ! in )
    {
        cout<<"\nFile Not Found\n";
        return 0;
    }
    
    ofstream out("abc.txt");

    char ch;

    while(1)
    {
        in >> ch; // reads from file

        if( in.eof() )
        {
            break;
        }

        out << ch; // writes to the file
    }
    
    in.close();
    out.close();

    return 0;
}



