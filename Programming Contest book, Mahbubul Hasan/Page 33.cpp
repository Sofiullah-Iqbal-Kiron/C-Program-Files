#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    return (n==1)? 1:n*factorial(n-1);
}

int main()
{
    int n, r;
    cout << "Enter n and r for finding nPr: ";
    cin >> n >> r;
    cout << "nPr = " << factorial(n)/(factorial(r)*factorial(n-r));

    return 0;
}
