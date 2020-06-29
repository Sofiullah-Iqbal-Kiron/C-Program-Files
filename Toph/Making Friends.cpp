#include<iostream>
using namespace std;

int main()
{
    int N, i, k=0;
    cin >> N;
    for(i=1; i<N; i++)
    {
        if(N%i==0)
            k++;
    }
    cout << k << endl;
}
