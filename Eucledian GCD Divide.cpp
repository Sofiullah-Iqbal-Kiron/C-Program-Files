#include<iostream>
#include<algorithm>
using namespace std;

int Swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int gcd(int a, int b)
{
    int temp;
    if(a>b)
    {
        Swap(a, b);
    }
    while(b%a!=0)
    {
        temp = a;
        a = b%a;
        b = temp;
    }

    return a;
}

int HCF(int a, int b)
{
    return __gcd(a, b);
}

int LCM(int a, int b)
{
    return (a*b)/HCF(a, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << "GCD = " << gcd(a, b) << endl;
    cout << "LCM = " << LCM(a, b) << endl;
}
