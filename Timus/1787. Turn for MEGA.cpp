///Accepted but not in my logic.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

int k, n;
cin >> k >> n;
int a;
int sum = 0;
for(int i=0; i<n; i++)
{
    cin >> a;
    sum += a;
    sum = max(0, sum - k);
}

cout << sum << endl;

END
