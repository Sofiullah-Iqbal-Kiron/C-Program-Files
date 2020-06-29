#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
#define pi 3.141592653589793238
using namespace std;

START

    int H, h1, h2;
    cin >> H >> h1 >> h2;
    double vs, vl, vn, vt;
    int hs = H-h2;
    int hl = H-(h1+hs);
    int hn = H-(hl+hs);
    vt=(4.0/3)*pi*(H/2)*(H/2)*(H/2);
    vs=(1.0/3)*pi*hs*hs*((3*H)/2-hs);
    vn=(1.0/3)*pi*hl*hl*((3*H)/2-hl);
    vl=vt-vn-vs;
    cout << fixed << setprecision(6) << vn << " " << vl << " " << vs << endl;

END
