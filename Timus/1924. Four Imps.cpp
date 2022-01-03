///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    int n, result=1;
    cin >> n;
    for(int i=2; i<=n; i++)
    {
        if(i%2==0)
        {
            result+=i;
        }
        else
        {
            result-=i;
        }
    }
    if(result%2==0)
    {
        cout << "black" << endl;
    }
    else
    {
        cout << "grimy" << endl;
    }

END
