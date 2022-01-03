#include<iostream>
#include<cmath>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    if(n<=k)
        cout << "2" << endl;
    else
        cout << ceil((2.0*n)/k) << endl;
}
