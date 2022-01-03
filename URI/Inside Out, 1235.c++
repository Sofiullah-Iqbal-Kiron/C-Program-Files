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
        string line;
        getline(cin, line);
        int li = line.size() - 1;
        int i = li / 2;
        while (i >= 0)
            cout << line[i--];
        i = li;
        while (i > li / 2)
            cout << line[i--];
        cout << endl;
    }
}