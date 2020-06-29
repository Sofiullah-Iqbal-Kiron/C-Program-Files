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
    if(carry)
    {
        result.push_back(carry+'0');
    }
    reverse(result.begin(), result.end());

    return result;
}

string Pow2(int n)
{
    if(n==0)
    {
        return "1";
    }
    else if(n==1)
    {
        return "2";
    }
    else if(n<0)
    {
        return "EXCEPTION";
    }
    string a = "2";
    int i;
    for(i=1; i<n; i++)
    {
        a = Add(a, a);
    }

    return a;
}

int main()
{
    int n;string s;
    cin >> n;
    long long int deci = powl(2, n);
    cout << deci << endl;
    cout << powl(2, n) << endl;
    cout << "Power of 2 to the power " << n << ":- " << Pow2(n) << endl;
}

