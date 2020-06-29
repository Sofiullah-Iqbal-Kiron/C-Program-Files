#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
#define pi_by_four 3.141593/4.0
#define max3(a, b, c) max(max(a, b), c)
#define max4(a, b, c, d) max(max3(a, b, c), d)
#define PI 3.141592653589793238
using namespace std;

START

    int T;
    cin >> T;
    while(T--)
    {
        int N, i, j;
        float ans = 0;
        cin >> N;
        long long int fib[N+1];
        fib[0]=0;
        fib[1]=1;
        for(i=2; i<=N; i++)
        {
            fib[i]=fib[i-1]+fib[i-2];
        }
        for(i=1; i<=N; i++)
        {
            ans += ((fib[i]*fib[i]) - (pi_by_four*fib[i]*fib[i]));
            ///ans += (fib[i]*fib[i]*0.21460175);
        }
        cout << fixed << setprecision(2) << ans << endl;
    }

END
