#include<iostream>
using namespace std;

int rev(int N)
{
    int rem, rev=0;
    while(N>0)
    {
        rem=N%10;
        rev=rev*10+rem;
        N/=10;
    }
    return rev;
}

int main()
{
    int N, revN;
    cin >> N;
    for(int i=1; i<=N; i++)
    {
        revN=rev(i);
        if(revN==i)
        {
            cout << i << endl;
        }
    }
}
