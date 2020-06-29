///Accepted. First time not accepted for the reason of - fixed setprecision.

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int A;
        cin >> A;
        cout << fixed << setprecision(15) << 0.21460183660255 * A << " " << 3.141592653589793238 * sqrt(A) << endl;
    }
}
