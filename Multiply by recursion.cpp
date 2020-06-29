#include<bits/stdc++.h>
using namespace std;

int mul(int m, int n)
{
    int ans;
    if(n==1) return m;
    else ans = m+mul(m, n-1);
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << mul(m, n) << endl;
}
