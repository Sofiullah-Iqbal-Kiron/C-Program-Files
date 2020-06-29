#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    while(a!=b)
    {
        if(a>b)
        {
            a -= b;
        }
        else
        {
            b -= a;
        }
    }

    return a;
}

int main()
{
    int a, b;
    cout << "Enter two number for gcd: "; cin >> a >> b;
    cout << "GCD of " << a << " " << b << ": " << gcd(a, b);
}
