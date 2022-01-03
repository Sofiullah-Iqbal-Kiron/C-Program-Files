// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, L, C, i;
    while (cin >> N >> L >> C)
    {
        string story[N];
        int actualLines = 0;
        for (i = 0; i < N; i++)
            cin >> story[i];
        i = 0;
        while (i < N)
        {
            string oneLine = story[i++];
            while (i < N && (oneLine + " " + story[i]).size() <= C)
                oneLine = oneLine + " " + story[i++];
            actualLines++;
        }

        cout << (int)ceil((double)actualLines / L) << endl;
    }
}