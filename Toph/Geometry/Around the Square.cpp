#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
#define pi acos(-1)
using namespace std;

START

    int a, r1, r2, r3, r4;
    while(scanf("%d%d%d%d%d", &a, &r1, &r2, &r3, &r4) != EOF)
    {
        cout << fixed << setprecision(3) << a*a-pi/4.0*(r1*r1+r2*r2+r3*r3+r4*r4) << endl;
    }

END
