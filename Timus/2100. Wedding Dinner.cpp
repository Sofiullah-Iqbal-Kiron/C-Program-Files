///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    int n, guest=2;
    cin >> n;
    guest += n;
    while(n--)
    {
        string s;
        cin >> s;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='+')
            {
                guest++;
            }
        }
    }
    if(guest != 13)
    {
        cout << 100*guest << endl;
    }
    else
    {
        cout << 100*(guest+1) << endl;
    }

END
