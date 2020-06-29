#include<iostream>
using namespace std;

///C++ program to illustrate dynamic memory allocation by using new and delete operator.

int main()
{
    //Pointer intialization to NULL.
    int *p = NULL;

    //Request memory for the variable using new operator.
    p = new(nothrow) int;
    /*
        Now in this variable p, we can store any address
        and if
        we assign any values to this address then it will store this at
        the address of specified heap location in the memory.
    */

    if(!p)
    {
        cout << "Allocation of memory failed." << endl;
    }
    else
    {
        //Store value at allocated address.
        *p = 29; //In the address of p, we assign int value 29.
        cout << "Value of p = " << *p << endl;
    }

    ///Request block of memory of floating type
    float *r = new float(75.25);
    cout << "Value of r = " << *r << endl;

    ///Request block of memory of size n
    int *q = new(nothrow) int[5];
    for(int i=0; i<5; i++)
    {
        q[i]=i+1;
    }

    cout << "Values stored in block of memory: ";
    for(int i=0; i<5; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;

    delete p, r;
    delete[] q;

    return 0;
}