
// Matrix Operations

#include<iostream>
#include<iomanip>
using namespace std;

class Matrix
{
    int x[3][3];
    public:
        Matrix();

        Matrix(Matrix & );

        ~Matrix() {} // Empty Implementation

        friend istream & operator >> (istream & , Matrix &);

        friend ostream & operator << (ostream & , Matrix &);

        Matrix operator + (Matrix &);
        Matrix operator - (Matrix &);
        Matrix operator * (Matrix &);

        void operator - ();
};


Matrix :: Matrix()
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j] = 0;
        }
    }

}

Matrix :: Matrix (Matrix & t)
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            x[i][j] = t.x[i][j];
        }
    }

}

istream & operator >> (istream & kin , Matrix & t)
{
    int i,j;

    cout<<"\nMatrix data : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            kin >> t.x[i][j];
        }
    }

    return kin;
}

ostream & operator << (ostream & kout , Matrix & t)
{
    int i,j;

    kout << "\nMatrix Data : \n";
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            kout << t.x[i][j] <<"  ";
        }

        kout << endl;
    }
    
    return kout;
}


Matrix Matrix :: operator + (Matrix & t)
{
    int i,j;

    Matrix p; // local object

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p.x[i][j] = x[i][j] + t.x[i][j];
        }
    }

    return p;
}


Matrix Matrix :: operator - (Matrix & t)
{
    int i,j;

    Matrix p; // local object

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            p.x[i][j] = x[i][j] - t.x[i][j];
        }
    }

    return p;
}


Matrix Matrix :: operator * (Matrix & t)
{
    int i,j,k;

    Matrix p; // local object

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                p.x[i][j] += ( x[i][k] * t.x[k][j] );
            }
        }
    }

    return p;
}


void Matrix :: operator - ()
{
    int i,j,tmp;

    for(i=0;i<3;i++)
    {
        for(j=0;j<i;j++)
        {
            tmp=x[i][j];
            x[i][j]=x[j][i];
            x[j][i]=tmp;
        }
    }

}


int main()
{
    Matrix p , q , r;

    cout << "\nMatrix 1 : \n";
    cin >> p;

    cout << "\nMatrix 2 : \n";
    cin >> q;

    r = p + q;
    cout << "\nAddition of Matrix 1 and Matrix 2 : \n";
    cout << r;

    r = p - q;
    cout << "\nSubstraction of Matrix 1 and Matrix 2 : \n";
    cout << r;

    r = p * q;
    cout << "\nMultiplication of Matrix 1 and Matrix 2 : \n";
    cout << r;

    - r;
    cout << "\n Transpose of Multiplication of Matrix 1 and Matrix 2 : \n";
    cout << r;
    
    return 0;
}


