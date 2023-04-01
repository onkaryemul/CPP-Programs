
// Template Class Member Functions definitions outside the class

#include<iostream>
using namespace std;

template<class T>
class tclass
{
    T var[5];
    public:
       void setData();
       void display();
};

template<class T>
void tclass<T>::setData()
{
    for(int i=0;i<5;i++)
    {
        cout<<"\nData : ";
        cin>>var[i];
    }

    return;
}

template<class T>
void tclass<T>::display()
{
    cout<<"\nData : \n";
    for(int i=0;i<5;i++)
    {
        cout<<var[i]<<"  ";
    }

    return;
}



int main()
{
    tclass<int> a;
    a.setData();
    a.display();

    tclass<double> b;
    b.setData();
    b.display();

    return 0;
}




