#include<iostream>
using namespace std;

int main()
{
    int H, N, Ai;
    cin >> H >> N;
    while(N>0 && H>0)
    {
        cin >> Ai;
        H-=Ai;
        N--;
    }
    if(H<=0) cout << "Yes" << endl;
    else cout << "No" << endl;
}
