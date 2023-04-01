
//

#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main()
{
    ifstream sin("stu.txt");
    
    int no,mrk;
    char nm[15];

    while(1)
    {
        sin >> no >> nm >> mrk;

        if(sin.eof())
        {
            break;
        }

        cout<<setw(4) <<no<<"  "<<setiosflags(ios::left)
            <<setw(15)<<nm<<"  "<<resetiosflags(ios::left)
            <<setw(4) <<mrk<<endl;
    }

    sin.close();

    return 0;
}


