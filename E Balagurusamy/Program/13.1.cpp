#include<iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter values of a and b: "; cin >> a >> b;
    int x=a-b;
    try
    {
        if(x!=0)
            cout << "Result: " << a/b << endl;
        else
            throw(x);
    }
    catch(int i)
    {
        cout << "Exception caught: Divide by ZERO" << endl;
    }
}
