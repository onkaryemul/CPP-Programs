
// Create a header file 'book.h' and implement class book

#include<iostream>
using namespace std;

class Book
{
    int bno;
    char bnm[15];
    int bprice;
    public:
       Book()
       {
           bno = bprice = 0;
           bnm[0] = '\0';
       }

       ~Book() {}

       friend istream & operator >> (istream & in, Book & b)
       {
           cout<<"\nBook No. : ";
           in >> b.bno;

           cout<<"\nName : ";
           in >> b.bnm;

           cout<<"\nPrice : ";
           in >> b.bprice;

           return in;
       }

       friend ostream & operator << (ostream & out , Book & b)
       {
           out << "\nBook Data :\nNo.: "<<b.bno
               << "\nName : "<<b.bnm
               << "\nPrice : "<<b.bprice<<endl;

           return out;
       }

       int getNo()
       {
           return bno;
       }

       int getPrice()
       { 
           return bprice;  
       }

};


// Save the file with name "book.h"


