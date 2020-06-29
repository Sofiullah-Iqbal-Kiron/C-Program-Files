//wrong man this is okay...#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, c=0;
    cin >> n;
    for(i=2; i<sqrt(n); i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c>0)
    {
        cout << "This is not a prime" << endl;
    }
    else
    {
        cout << "This is a prime" << endl;
    }
}
