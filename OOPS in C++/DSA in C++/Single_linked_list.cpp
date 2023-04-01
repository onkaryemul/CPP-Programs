
// Implementation of Single Linked list

#include<iostream>
#include "NODE.h"
using namespace std;

class SList
{
    NODE *st;
    int cnt;
    public:
       SList()
       {
           st = NULL;
           cnt = 0;
       }

       ~SList();

       void addEnd(int d);
       void addBeg(int d);
       void display();
       int getCnt()
       {
           return cnt;
       }
       
       void delFirst();
       void delLast();
       void deliNode(int pos);
       void delAll();
       void menu();

};

void SList :: addEnd(int d)
{
    NODE *a = new NODE(d);
    NODE *b=st;

    if(st == NULL)
    {
        st = a;
    }
    else
    {
        while( b->getNext() != NULL)
        {
            b = b->getNext();
        }

        b->setNext(a);
    }

    cnt++;
}

void SList :: addBeg(int d)
{
    NODE *a = new NODE(d);

    a->setNext(st);

    st = a;

    cnt++;

  /*
      st = new NODE(d,st);

      cnt++;
  */

}

void SList :: display()
{
    NODE *a = st;

    if(st == NULL)
    {
        cout<<"\nEmpty List\n";
    }
    else
    {
        cout<<"\nData : \n";

        while(a != NULL)
        {
            cout<<"  "<< a->getData();

            a = a->getNext();
        }

    }

}

void SList :: delFirst()
{
    NODE *a = st;

    if(st == NULL)
    {
        return ;
    }

    st = a->getNext();

    delete a;

    cnt--;
}

void SList :: delLast()
{
    NODE *a = st;
    NODE *b;

    if(st == NULL)
    {
        return;
    }

    if( a->getNext() == NULL)
    {
        st = a->getNext();
    }
    else
    {
        while( a->getNext() != NULL)
        {
            b = a;

            a = a->getNext();
        }

        b->setNull();
    }

    delete a;

    cnt--;
}

void SList :: deliNode(int pos)
{
    NODE *a, *b, *c;

    int i=1;

    if(pos == 1)
    {
        delFirst();
    }
    else
    {
        if(pos == cnt)
        {
            delLast();
        }
        else
        {
            a = st;

            while( i < pos)
            {
                b = a;

                a = a->getNext();

                i++;
            }

            c = a->getNext();

            b->setNext(c);

            delete a;

            cnt--;
        }

    }

}

/*
void  SList :: delAll()
{
    while( st != NULL)
    {
        delFirst();
    }
}
*/

void SList :: delAll()
{
    NODE *a = st;

    while( st != NULL)
    {
        st = a->getNext();

        delete a;

        a = st;
    }

    cnt = 0;
}

SList :: ~SList()
{
    delAll();
}

void SList :: menu()
{
    int opt,d,pos;

    while(1)
    {
        cout<<"\nSingle Linked List Menu\n1.Add at End\n2.Add at Begin\n3.Display\n4.Delete First Node\n5.Delete Last Node\n6.Delete ith Node\n7.Delete All Nodes\n8.Exit\nOption : ";
        cin>>opt;

        if(opt > 7)
        {
            break;
        }

        switch(opt)
        {
            case 1:
                cout<<"\nData at End : ";
                cin>>d;
                addEnd(d);
                break;

            case 2:
                cout<<"\nData at Begin : ";
                cin>>d;
                addBeg(d);
                break;

            case 3:
                display();
                break;

            case 4:
                if( st == NULL)
                {
                    cout<<"\nEmpty List\n";
                }
                else
                {
                    delFirst();
                }
                break;

            case 5:
                if( st == NULL)
                {
                    cout<<"\nEmpty List\n";
                }
                else
                {
                    delLast();
                }
                break;

            case 6:
                if( st == NULL)
                {
                    cout<<"\nEmpty List\n";
                }
                else
                {
                    cout<<"\nEnter Node Position : ";
                    cin>>pos;

                    if( (pos<1) || (pos>cnt) )
                    {
                        cout<<"\nInvalid NODE Position\n";
                    }
                    else
                    {
                        deliNode(pos);
                    }

                }
                break;

            case 7:
                delAll();
                break;
        }

    }

}


int main()
{
    SList sl;

    sl.menu();

    return 0;
}


