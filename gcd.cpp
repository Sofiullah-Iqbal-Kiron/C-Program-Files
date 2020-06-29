#include<iostream>
using namespace std;

int main()
{
    int a, b, low, i, gcd;
    cin >> a >> b;
    if(a<b)
    {
        low=a;
    }
    else
    {
        low=b;
    }
    for(i=low; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            gcd = i;
            break;
        }
    }
    cout << gcd << endl;
}
