
// Addition,deletion and modification of existing account class object

#include<iostream>
#include<fstream>
#include<iomanip>
#include "book.h"
using namespace std;

class Acct
{
    int acno;
    char acnm[15];
    int acbal;
    int state; 
    // state 0 --->deleted (mark for deletion)
    // state 1 --->running (valid record)

    public:
        Acct()
        {
            acno = acbal = 0;
            state = 1;
            acnm[0] = '\0';
        }

        ~Acct() {}

        int getNo()
        {
            return acno;
        }

        char *getNm()
        {
            return acnm;
        }

        int getBal()
        {
            return acbal;
        }

        int getState()
        {
            return state;
        }

        void delRecord()
        {
            state = 0;
        }

        void display();

        void setData(int);
};


void Acct :: display()
{
    cout<<"\n"<<setw(4)<<acno<<"  "<<setw(15)
        <<setiosflags(ios::left)<<acnm
        <<resetiosflags(ios::left)<<"  "
        <<setw(6)<<acbal<<"  "
        <<state<<"\n";

    return;
}

void Acct :: setData(int n)
{
    acno = n;

    cout<<"\nName : ";
    cin>>acnm;

    do
    {
        cout<<"\nOpening Balance : ";
        cin>>acbal;

        if(acbal>500)
        {
            break;
        }

    } while (1);

    state = 1;
    
    return;
}


class AcctAMD
{
    fstream fa;  
    Acct obj;
    
    public:
        AcctAMD();

        ~AcctAMD()
        {
            fa.close();
        }

       // byte no. from begin of the file
        int search(int); // return -1 if not found , otherwise position in bytes of the record found
        
        void add();

        void mod();

        void del();

        void display();
};


AcctAMD :: AcctAMD()
{
    ifstream in;

    in.open("acct.dat", ios::in | ios::binary);

    if( !in ) // file not found
    {
        ofstream out;

        out.open("acct.dat", ios::out | ios::binary );

        out.close();
    }
    else
    {
        in.close();
    }

    fa.open("acct.dat", ios::in | ios::out | ios::binary );

}


int AcctAMD :: search(int no)
{
    int pos=0;

    fa.seekg(0,ios::beg);
    // sets get ptr to byte 0 from begin of file

    while(1)
    {
        fa.read( (char *)&obj , sizeof(Acct) );

        if( fa.eof() )
        {
            fa.clear(); // unlocks the file

            pos = -1 ; // not found

            break;
        }

        if( obj.getNo() == no )
        {
            break;
        }

        pos = fa.tellg();
    }

    return pos;
}


void AcctAMD :: add()
{
    int no,pos;

    cout<<"\nA/c No. : ";
    cin>>no;

    pos = search(no);

    if(pos>=0)
    {
        cout<<"\nRecord Exists!";
        return;
    }

    obj.setData(no);
    
    fa.seekp(0,ios::end); // shifts put ptr to 0th byte from end

    fa.write((char *)&obj,sizeof(Acct));

    return;
}


void AcctAMD :: mod()
{
    int no,pos;

    cout<<"\nA/c No. : ";
    cin>>no;

    pos = search(no);

    if(pos==-1 || obj.getState()==0)
    {
        cout<<"\nRecord does not exits!";
        return;
    }

    obj.setData(no);

    fa.seekp(pos,ios::beg); // shifts put ptr to 0th byte from begin

    fa.write((char *)&obj,sizeof(Acct));

    return;
}


void AcctAMD :: del()
{
    int no,pos;

    cout<<"\nA/c No. : ";
    cin>>no;

    pos = search(no);

    if(pos==-1 || obj.getState()==0 )
    {
        cout<<"\nRecord does not exists!!";
        return;
    }

    obj.delRecord();

    fa.seekp(pos,ios::beg);  // shifts put ptr to 0th byte from begin

    fa.write((char *)&obj , sizeof(Acct));

    return;
}


// function to display all accounts
void AcctAMD :: display()
{
    fa.seekg(0,ios::beg);
    
    while(1)
    {
        fa.read((char *)&obj,sizeof(Acct));

        if(fa.eof())
        {
            fa.clear();

            break;
        }

        obj.display();
    }

    return;
}



int main()
{
    int opt;

    AcctAMD pa;

    while(1)
    {
        cout<<"\nMenu\n1.Add\n2.Mod\n3.Del\n4.Display\n5.Exit\nOption : ";
        cin>>opt;

        if(opt>4)
        {
            break;
        }

        switch(opt)
        {
            case 1:
                pa.add();
                break;

            case 2:
                pa.mod();
                break;

            case 3:
                pa.del();
                break;

            case 4:
                pa.display();
                break;

        }

    }

    return 0;
}



