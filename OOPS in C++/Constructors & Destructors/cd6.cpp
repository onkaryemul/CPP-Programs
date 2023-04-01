
// Implementation of class employee

#include<iostream>
#include<string.h>
#include "MyTime.h"

class Employee
{
    int eno;
    char enm[15];
    int esph;
    MyTime wt;
    public:
       Employee()
       {
           eno=esph=0;
           enm[0]='\0';
       }

       Employee(Employee & k)
       {
           eno = k.eno;

           esph = k.esph;

           wt = k.wt;

           strcpy( enm , k.enm);
       }
       
       ~Employee() {}

       void setData(int no)
       {
           eno = no;

           cout<<"\nName : ";
           cin>>enm;

           cout<<"\nSalary Per Hr : ";
           cin>>esph;

           cout<<"\nWork Data \n";
           wt.setData();
       }

       void setData()
       {
           cout<<"\nEmployee No. : ";
           cin>>eno;

           setData(eno);
       }

       int getSalary()
       {
           return ( esph * wt.gethr() );
       }

       int getNo()
       {
           return eno;
       }

       int getSPH()
       {
           return esph;
       }

       MyTime getWT()
       {
           return wt;
       }
       
       void display()
       {
           cout<<"\nEmployee Data\nNo. : "<<eno
               <<"\nName : "<<enm<<"\nSalary Per Hr : "
               <<esph<<"\nWork Details : ";

           wt.display();

           cout<<"\nTotal Salary : "<<getSalary()<<"\n";
       }

};

/*
int main()
{
    Employee emp;
    
    emp.setData(23);

    emp.display();

    return 0;
}
*/

int main()
{ 
    Employee emp[5];

    int i=0;

    while(i<5)
    {
        emp[i].setData();
        i++;
    }

    for(i=0;i<5;i++)
    {
        emp[i].display();
    }

    return 0;
}


