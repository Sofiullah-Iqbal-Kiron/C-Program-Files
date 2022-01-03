///Nare vai, r parlam na.

#include<bits/stdc++.h>
using namespace std;

int boka(int n)
{
    return (sqrt(1+4*(2*n-2))-1)/2;
}

int value(int l)
{
    int n = boka(l);
    return (n*(n+1))/2+1;
}

int main()
{

    int N;
    cin >> N;
    while(N--)
    {
        int Ni, i;
        cin >> Ni;
        if(value(Ni)==Ni)
        {
            cout << "1" << " ";
        }
        else
        {
            cout << "0" << " ";
        }
    }
    cout << endl;
}
