///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

int diff(int a, int b)
{
    return a>=b?a-b:b-a;
}

START

    int n, i;
    cin >> n;
    string s[n];
    int p[n+1];
    p[0]=1;
    for(i=0; i<n; i++)
    {
        cin >> s[i];
        if(s[i]=="Alice" || s[i]=="Ariel" || s[i]=="Aurora" || s[i]=="Phil" || s[i]=="Peter" || s[i]=="Olaf" || s[i]=="Phoebus" || s[i]=="Ralph" || s[i]=="Robin")
        {
            p[i+1]=1;
        }
        else if(s[i]=="Bambi" || s[i]=="Belle" || s[i]=="Bolt" || s[i]=="Mulan" || s[i]=="Mowgli" || s[i]=="Mickey" || s[i]=="Silver" || s[i]=="Simba" || s[i]=="Stitch")
        {
            p[i+1]=2;
        }
        else if(s[i]=="Dumbo" || s[i]=="Genie" || s[i]=="Jiminy" || s[i]=="Kuzko" || s[i]=="Kida" || s[i]=="Kenai" || s[i]=="Tarzan" || s[i]=="Tiana" || s[i]=="Winnie")
        {
            p[i+1]=3;
        }
    }
    int step = 0;
    for(i=0; i<n; i++)
    {
        step += diff(p[i], p[i+1]);
    }
    cout << step << endl;

END
