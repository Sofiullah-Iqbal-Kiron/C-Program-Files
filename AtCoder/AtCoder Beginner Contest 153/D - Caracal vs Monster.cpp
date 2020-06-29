#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    long int H, k=0;
    int i;
    cin >> H;
    for(i=1; i<H; i++)
    {
        k+=(pow(2, i-1));
    }
    cout << k << endl;
}
