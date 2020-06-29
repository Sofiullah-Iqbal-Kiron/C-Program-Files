#include<bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n==1) return n;
    else return n+sum(n-1);
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
}

