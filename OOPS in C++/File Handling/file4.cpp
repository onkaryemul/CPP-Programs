
//

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream nout("num.txt");

    int no;
    
    cout<<"\nEnter Numbers : \n";

    while(1)
    {
        cin>>no;

        if(no==0)
        {
            break;
        }

        nout << no <<"\n";
    }

    nout.close();

    return 0;
}