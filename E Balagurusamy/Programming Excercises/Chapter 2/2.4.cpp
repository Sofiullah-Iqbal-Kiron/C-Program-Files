#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int a, b, c;
    float x;
    cin >> a >> b >> c;
    x = (a/b)-c;
    cout << fixed << setprecision(2) << x << endl;

}
