#include<iostream>
using namespace std;

int ceil(double a)
{
    if(a>=0)
    {
        return a+1;
    }
    else
    {
        return a;
    }
}

int floor(double a)
{
    if(a>=0)
    {
        return a;
    }
    else
    {
        return a-1;
    }
}

int main()
{
    double a;
    cin >> a;
    cout << "Ceil of this: " << ceil(a) << endl << "Floor of this: " << floor(a) << endl;
}
