///Accepted but taken help from Yeasin.

#include<iostream>
#include<cmath>
#define PI acos(-1)
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        double d=0.0, a=0;
        cin >> d >> a;
        cout << d*(1.0/sin((PI*a)/180) + 1.0/tan((PI*a)/180)) << endl;
    }
}
