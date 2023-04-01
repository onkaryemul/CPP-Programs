
#include<iostream>
using namespace std;

class dynobj
{
    int noe;
    int *ptr;
    public:
        dynobj();
        dynobj(int);
        dynobj(dynobj &);
        ~dynobj()
        {
            delete[] ptr;
        }

        void setData();
        void display();
        int total();
        
        int avg()
        {
            return total()/noe;
        }

};


dynobj::dynobj()
{
    noe=5;

    ptr=new int[noe];
}

dynobj::dynobj(int a)
{
    noe=a;

    ptr=new int[noe];
}

dynobj::dynobj(dynobj & t)
{
    noe=t.noe;

    ptr=new int[noe];

    for(int i=0;i<noe;i++)
    {
        ptr[i]=t.ptr[i];
    }
}

void dynobj::setData()
{
    cout<<"\nEnter Data : ";
    for(int i=0;i<noe;i++)
    {
        cin>>ptr[i];
    }
}

void dynobj::display()
{
    cout<<"\nData : \n";
    for(int i=0;i<noe;i++)
    {
        cout<<" "<<ptr[i];
    }
}

int dynobj::total()
{
    int tot=ptr[0];

    int i=1;

    while(i<noe)
    {
        tot+=ptr[i];
        i++;
    }

    return tot;
}


int main()
{
    dynobj a(7);

    a.setData();
    a.display();

    cout<<"\nTotal : "<<a.total();
    cout<<"\nAverage : "<<a.avg();

    return 0;
}



