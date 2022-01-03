#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T, i;
    cin >> T;
    cin.ignore();
    while(T--)
    {
        string s;
        cin >> s;
        char ss[s.size()];
        for(i=0; i<s.size(); i++)
        {
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || [i]=='o' || s[i]=='u')
            {
                s[i]='_';
            }
        }

    }
}
