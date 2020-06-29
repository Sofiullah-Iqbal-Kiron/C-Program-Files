///Accepted.
///d = A2-A1;
///n = ((An-A1)/d)+1;

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
#define PI acos(-1)
#define pi 3.141592653589793238
#define ld long long double
#define lli long long int
using namespace std;

START

    int T;
    cin >> T;
    while(T--)
    {
        int A1, A2, An, d, n;
        cin >> A1 >> A2 >> An;
        cout << ((((An-A1)/(A2-A1))+1)*(2*A1+((((An-A1)/(A2-A1))+1)-1)*(A2-A1)))/2 << endl;
    }

END
