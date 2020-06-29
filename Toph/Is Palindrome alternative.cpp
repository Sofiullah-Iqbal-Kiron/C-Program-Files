#include<bits/stdc++.h>
using namespace std;

string rev(string s)
{
    int n = s.length();
    string ss;
    for(int i=0; i<n; i++)
        ss.push_back(s[n-i-1]);
    return ss;
}

int main()
{
    string s;
    cin >> s;
    if(rev(s)==s)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
