#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    int low, i;
    if(a<b){low=a;}
    else{low=b;}
    for(i=low; i>=1; i--)
    {
        if(a%i==0 && b%i==0)
        {
            return i;
            break;
        }
    }
}

int main()
{
    int x, y;
    cin >> x >> y;
    cout << gcd(x, y) << endl;
}
