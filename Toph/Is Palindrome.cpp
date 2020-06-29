#include<bits/stdc++.h>
using namespace std;

string rev(string s)
{
    int n = s.length();
    for(int i=0; i<n/2; i++)
    {
        swap(s[i], s[n-i-1]);
    }
    return s;
}

int main()
{
    string s;
    cin >> s;
    if(rev(s)==s) cout << "Yes" << endl;
    else cout << "No" << endl;
}
