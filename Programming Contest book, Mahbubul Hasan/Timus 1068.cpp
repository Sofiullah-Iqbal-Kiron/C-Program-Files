#include<iostream>
using namespace std;

int main()
{
    signed int N, sum=0, i;
    cin >> N;
    if(N>0)
    {
        for(i=1; i<=N; i++)
        {
            sum+=i;
        }
        cout << sum << endl;
    }
    else
    {
        for(i=N; i<=1; i++)
        {
            sum+=i;
        }
        cout << sum << endl;
    }
}
