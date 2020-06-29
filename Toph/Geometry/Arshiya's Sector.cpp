///Accepted.

#include<iostream>
#include<iomanip>
#define pi 3.141592653589793238
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int r, a;
        cin >> r >> a;
        cout << fixed << setprecision(9) << a/360.0*pi*r*r << endl;
    }
}
