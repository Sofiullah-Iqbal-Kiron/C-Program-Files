#include<bits/stdc++.h>
using namespace std;

bool isprime(int n)
{
    int prime[]={2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
    for(int i=0; i<12; i++)
    {
        if(n%prime[i]==0)
        {
            return true;
        }
    }
    return false;
}

bool isPrime(int n)
{
    int c=0;
    for(long long i=2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n, c=0;
    cin >> n;
    if(n==2)
    {
        cout << "2" << endl;
    }
    else if(n>2)
    {
        cout << "2" << " ";
        for(long long i=3; i<=n; i+=2)
        {
            if(isprime(i)==true)
            {
                cout << i << " ";
                c++;
            }
        }
        cout << endl;
        if(n>1)
        {
            cout << "Total: " << c+1 << endl;
        }
    }
}
