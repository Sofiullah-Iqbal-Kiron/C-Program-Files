#include<bits/stdc++.h>
using namespace std;

string Add(string s1, string s2)
{
    string result;
    int cs, carry=0;
    if(s1.size()<s2.size())
    {
        swap(s1, s2);
    }
    int c1, c2;
    c1 = s1.size();
    c2 = s2.size();
    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());
    for(int i=c2; i<c1; i++)
    {
        s2.push_back('0');
    }
    for(int i=0; i<c1; i++)
    {
        cs = (s2[i]-'0')+(s1[i]-'0')+carry;
        result.push_back(cs%10+'0');
        carry=cs/10;
    }
    if(carry) ///Thats mean, carry is not 0; till carry become 0;
    {
        result.push_back(carry+'0');
    }
    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << Add(s1, s2) << endl;
    }
}
