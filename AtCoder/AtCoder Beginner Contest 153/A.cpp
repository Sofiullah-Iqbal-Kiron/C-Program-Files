#include<iostream>
using namespace std;

int main()
{
    int H, A, k=0;
    cin >> H >> A;
    while(H>0)
    {
        H-=A;
        k++;
    }
    cout << k << endl;
}
