#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n;
    cout << "Enter the number of row:- "; cin >> n;
    cout << "\n";

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        cout << "\n";
    }
}
