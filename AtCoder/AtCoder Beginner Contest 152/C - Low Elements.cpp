#include<iostream>
#define rep(i, n) for(int i=0; i<n; i++)
using namespace std;

int main()
{
    int N, i, cnt=0;
    cin >> N;
    int P[N];
    for(i=0; i<N; i++)
    {
        cin >> P[i];
    }
    int curmin=1e9;
    rep(i, N)
    {
        curmin=min(curmin, P[i]);
        if(curmin==P[i])
            cnt++;
    }
    cout << cnt << endl;
}
