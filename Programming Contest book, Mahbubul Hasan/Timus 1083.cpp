#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n, k, i;
    long long value;
    string ex;
    cin >> n >> ex;
    k=ex.length();
    value = n;
    for(i=1; (n-(i*k))>1; i++)
        {
            value *= (n-(i*k));
        }
    if(n%k!=0)
    {
        value*=(n%k);
    }
    else
    {
        value *= k;
    }
    cout << value << endl;
}
