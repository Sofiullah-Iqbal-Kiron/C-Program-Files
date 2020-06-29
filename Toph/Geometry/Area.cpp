///Accepted. Here I used long int for 10^18. I think that was sufficient for this range.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    int T, i;
    cin >> T;
    for(i=1; i<=T; i++)
    {
        long int N;
        cin >> N;
        cout << "Case " << i << ": " << 2*(N-2) << endl;
    }

END
