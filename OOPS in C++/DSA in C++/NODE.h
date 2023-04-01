
// Create a header file with name "NODE.h"

#include<iostream>
using namespace std;

class NODE
{
    int data;
    NODE *next;
    public:
        NODE()
        {
            data = 0;
            next = NULL;
        }

        NODE(int d)
        {
            data = d;
            next = NULL;
        }

        NODE(int d , NODE *t)
        {
            data = d;
            next = t;
        }

        ~NODE() {}

        int getData()
        {
            return data;
        }

        NODE* getNext()
        {
            return next;
        }

        void setData(int d)
        {
            data = d;
        }

        void setNext(NODE *t)
        {
            next = t;
        }

        void setNull()
        {
            next = NULL;
        }

};


