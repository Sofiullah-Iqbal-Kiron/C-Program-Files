///Accepted.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, x, i, sum=0, al;
    cin >> n >> x;
    for(i=0; i<n; i++)
    {
        cin >> al;
        sum+=al;
    }
    if(sum>x)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
