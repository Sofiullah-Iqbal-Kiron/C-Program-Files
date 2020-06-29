///This code wrong output.

#include<iostream>
using namespace std;

int main()
{
    int i, j;
    for(i=0; i<=7; i++)
    {
        cout << i << " - ";
        cout.width(3);
        cout << i << endl;
    }
    for(i=8, j=10; i<1000; i++, j++)
    {
        cout << i << " - ";
        cout.width(3);
        cout << j << endl;
    }
}
