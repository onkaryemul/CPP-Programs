
//

#include<iostream>
using namespace std;

class A
{
    protected:
        int a;

    public:
        A()
        {
            a = 0;
        }

        ~A() {}

        void set()
        {
            cout<<"\nA a : ";
            cin>>a;
        }

        void display()
        {
            cout<<"\nA a : "<<a;
        }
        
};


class B : public A
{
    public:
        B() : A()
        {}

        ~B() {}

        void table();

        int prime();
};


void B :: table()
{
    int no = a;

    cout<<"\n *** Table of "<<a<<" :  *** "<<endl;
    for(int i=1 ; i<=10 ; i++)
    {
        cout<<no<<" * "<<i<<" = "<<(no*i)<<endl;
    }

}


int B :: prime()
{
    int no = a , i=2 ;
    
    if( no<=0 || no==1 )
    {
        return 0;
    }

    for( i=2 ; i<no/2 ; i++)
    {
        if( no%i == 0 )
        {
            break;
        }

    }

    return (i < no/2) ? 0 : 1;
}


class C : public B
{
    public:
        C() : B()
        {}

        ~C() {}

        int digitSum();

        int reverse();
        
};


int C :: digitSum()
{
    int tmp = a , digSum = 0;

    while( tmp > 0 )
    {
        digSum += (tmp % 10);

        tmp /= 10;
    }

    return digSum;
}


int C :: reverse()
{
    int tmp = a , rev = 0;

    while( tmp > 0 )
    {
        rev = (rev * 10) + (tmp % 10);

        tmp /= 10;
    }

    return rev;
}



int main()
{
    C cobj;

    cobj.set();

    cobj.table();

    string isPrime = ( cobj.prime() ) ? "prime" : "not prime" ;
    cout<<"\nEntered number is "<< isPrime <<endl;

    cout<<"\nSum of digits of entered number is "<< cobj.digitSum() <<endl;

    cout<<"\nReverse of the entered number is "<< cobj.reverse() <<endl;

    return 0;
}



