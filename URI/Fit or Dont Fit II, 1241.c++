// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    cin.ignore();
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        string ans = a.size() >= b.size() && a.substr(a.size() - b.size(), b.size()) == b ? "encaixa" : "nao encaixa";
        cout << ans << endl;
    }
}