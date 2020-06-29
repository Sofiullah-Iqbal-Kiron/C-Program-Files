#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int A[N];
    for(int i=0; i<N; i++)
    {
        cin >> A[i];
    }
    sort(A, A+N);
    for(int i=0; i<N; i++)
    {
        if(A[i]==A[i+1])
        {
            cout << "NO" << endl; return 0;
        }
        else
        {
            cout << "YES" << endl; return 0;
        }
    }
}
