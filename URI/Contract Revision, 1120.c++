// ac

#include <bits/stdc++.h>
using namespace std;

string removeD(string N, char D);
string original_number(string N);

int main()
{
    while (true)
    {
        char D;
        cin >> D;
        string N;
        cin >> N;
        if (D == '0' && N == "0")
            break;

        // Remove D from N
        N = removeD(N, D);

        // Get actual Number
        N = original_number(N);

        // Out
        cout << N << endl;
    }
}

string removeD(string N, char D)
{
    string s = "";
    for (int i = 0; i < N.size(); i++)
        if (N[i] != D)
            s.push_back(N[i]);

    return s;
}

string original_number(string N)
{
    if (N.empty())
        return "0";
    // Remove leading zero's
    string ans = "";
    int i = 0;
    while (N[i] == '0')
        i++;
    while (i < N.size())
        ans.push_back(N[i++]);

    return ans.empty() ? "0" : ans;
}