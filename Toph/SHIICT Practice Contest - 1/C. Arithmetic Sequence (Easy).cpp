///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    int N, M, a, sub=0;
    cin >> N >> M;
    for(int i=0; i<M; i++)
    {
        cin >> a;
        sub+=a;
    }
    cout << (N*(N+1))/2 - sub << endl;

END
