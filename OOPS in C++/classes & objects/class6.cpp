

#include<iostream>
#include<ios>
#include<iomanip>
using namespace std;

class Matrix
{
    int a[3][3];

    public:
        void setData();
        void display();
        Matrix add(Matrix &);
        Matrix sub(Matrix &);
        Matrix mul(Matrix &);
        void transpose();
        void init();
};

void Matrix::init()
{ 
    int i=0,j=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j]=0;
        }
    }

    return;
}

void Matrix::display()
{
    int i=0,j=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<setw(4)<<a[i][j];
        }
        
        cout<<endl;
    }

    return;
}

void Matrix::setData()
{
    int i=0,j=0;

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"\na["<<i<<"]["<<j<<"] : ";
            cin>>a[i][j];
        }
    }

    return;
}

void Matrix::transpose()
{
    int i=0,j=0;
    int tmp;

    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            tmp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=tmp;
        }
    }

    return;
}

Matrix Matrix::add(Matrix & t)
{
    Matrix r;

    r.init();

    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            r.a[i][j]=a[i][j]+t.a[i][j];
        }
    }
    return r;
}

Matrix Matrix::sub(Matrix & t)
{
    Matrix r;

    r.init();

    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            r.a[i][j]=a[i][j]-t.a[i][j];
        }
    }
    return r;
}

Matrix Matrix::mul(Matrix & t)
{
    Matrix r;

    r.init();

    int i,j,k;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                r.a[i][j] += ( a[i][k] * t.a[k][j] );
            }
        }
    }

    return r;
}






