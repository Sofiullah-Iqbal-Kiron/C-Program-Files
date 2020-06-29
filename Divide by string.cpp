#include<bits/stdc++.h>
using namespace std;

string divide(string &ns, int &dividor, int &rem)
{
    int i;
    rem=0;
    string result;
    if(ns.size()==1)
    {
        int num;
        num=ns[0]-'0';
        result.push_back(num/dividor+'0');
        rem = num%dividor;
        return result;
    }
    rem = ns[0]-'0';
    for(i=1; i<ns.size(); )
    {
        if(rem<dividor && i<ns.size())
        {
            rem=rem*10+(ns[i]-'0');
            i++;
        }
        result.push_back(rem/dividor+'0');
        rem%=dividor;
    }
    return result;
}

int main()
{
    while(1)
    {
        string ns;
        int dividor, rem;
        rem = 0;
        cin >> ns >> dividor;
        cout << ns << "/" << dividor << " = " << divide(ns, dividor, rem) << endl;
        cout << "Reminder: " << rem << endl;
    }
}
