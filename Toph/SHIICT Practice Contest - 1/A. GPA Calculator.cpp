#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for(int i=1; i<=T; i++)
    {
        int N;
        cin >> N;
        float p[N], sum = 0;
        for(int j=0; j<N; j++)
        {
            cin >> p[j];
            sum += p[j];
        }
        cout << "Case " << i << ": " << fixed << setprecision(3) << sum/N << endl;
    }
}
