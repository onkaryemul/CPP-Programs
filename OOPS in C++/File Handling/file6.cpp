
// Program to 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream sout("stu.txt");

    int no,mrk;
    char nm[15];

    while(1)
    {
        cout<<"\nRoll No. : ";
        cin>>no;

        if(no==0)
        {
            break;
        }

        cout<<"\nName : ";
        cin>>nm;

        cout<<"\nMarks : ";
        cin>>mrk;

        sout << no <<"  "<< nm <<"  " << mrk <<"\n";
    }

    sout.close();
    
    return 0;
}



