#include <bits/stdc++.h>
using namespace std;

#define sf scanf
#define pf printf
#define ssf sscanf
#define spf sprintf
#define fsf fscanf
#define fpf fprintf
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0)
#define scase sf ("%d",&tc)
#define sn sf ("%d",&n)
#define whilecase while (tc--)
#define eof while (cin >> n)
#define forloop for (pos=1; pos<=tc; pos++)
#define arrayloop (i=0; i<n; i++)
#define cinstr cin >> str
#define getstr getline (cin,str)
#define pcase pf ("Case %d: ",pos)
#define pii pair <int,int>
#define pb push_back
#define in insert
#define llu unsigned long long
#define lld long long
#define U unsigned int
#define endl "\n"

const int MOD = 1000000007;
const int MAX = 1000005;

int fun ()
{
    int i,val,sum=0;

    for (i=1; i<=6; i++)
    {
        sf ("%d",&val);
        sum += val;
    }

    return sum;
}

int main ()
{
    int T,pos,val,ans;

    sf ("%d",&T);

    for (pos=1; pos<=T; pos++)
    {
        ans = fun();

        sf ("%d",&val);
        ans -= val;

        ans += fun();

        if (ans < 0)
            ans = 0;

        pf ("Case %d: %d\n",pos,ans);
    }

    return 0;
}
