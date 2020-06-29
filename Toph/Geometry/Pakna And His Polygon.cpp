///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    int T;
    cin >> T;
    while(T--)
    {
        int A;
        cin >> A;
        cout << fixed << setprecision(5) << 2.598075*A*A << endl; ///Area of hexagon: (((3*sqrt(3))/2)*A*A). Three into root three by two and hole multiply with one side square.
    }

END
