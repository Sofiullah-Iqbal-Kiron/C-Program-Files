#include<iostream>
using namespace std;

int main()
{
    int x=-1;
    cout << "Before try" << endl;
    try
    {
        cout << "Inside try" << endl;
        if(x<0)
        {
            throw x;
        }
        cout << "after try" << endl;
    }

    catch(int x)
    {
        cout << "Exception caught" << endl;
    }

    int a=5;
    int b=0;
    try
    {
        int c=a/b;
        cout << c << endl;
    }
}

