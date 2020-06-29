///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    int N, LCM=1;
    cin >> N;
    int a;
    for(int i=0; i<N; i++)
    {
        cin >> a;
        LCM = (ans*a)/(__gcd(ans, a));
    }
    cout << LCM << endl;

END
