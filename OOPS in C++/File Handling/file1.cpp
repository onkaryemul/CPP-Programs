
// Program to create a text file

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream out("pqr.txt");

    char ch;

    while(1)
    {
        cout<<"\nCharacter : ";
        cin>>ch;

        if(ch=='#')
        {
            break;
        }

        out<<ch;
    }

    out.close();

    return 0;
}


