// ac

#include <bits/stdc++.h>
using namespace std;

bool letter(char c)
{
    if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
        return true;

    return false;
}

char shift3right(char c)
{
    return c += 3;
}

char shift1left(char c)
{
    return c -= 1;
}

int main()
{
    int t;
    cin >> t;
    for (int loop = 0; loop < t; ++loop)
    {
        string s;
        getline(cin, s);
        // What is the issue?
        while (s.empty())
            getline(cin, s);
        int i;

        // Shift 3 right
        int len = s.size();
        for (i = 0; i < len; i++)
            if (letter(s[i]))
                s[i] = shift3right(s[i]);

        // Reverse
        reverse(s.begin(), s.end());

        // Shift 1 left from half
        for (i = len / 2; i < len; i++)
            s[i] = shift1left(s[i]);

        cout << s << endl;
    }
}