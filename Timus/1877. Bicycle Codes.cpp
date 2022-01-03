///Accepted.

#include<bits/stdc++.h>
#define START int main(){
#define END system("PAUSE");return 0;}
using namespace std;

START

    string s1, s2;
    cin >> s1 >> s2;
    stringstream s(s1), ss(s2);
    int c1, c2, t;
    s >> c1; ss >> c2;
    int maxx = max(c1, c2);
    for(t=0; t<=maxx ;t++)
    {
        if((t%2==0 && t==c1) || (t%2!=0 && t==c2)) ///If first code is even and second code is match with odd.
        {
            cout << "yes" << endl;
            break;
        }
    }
    if((t%2==0 && t==c1) || (t%2!=0 && t==c2))
    {
        return 0;
    }
    else
    {
        cout << "no" << endl;
        return 0;
    }

END
