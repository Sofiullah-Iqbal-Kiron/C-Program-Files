// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int cnt = 0;
    double val;
    for (int i = 0; i < 6; i++)
    {
        cin >> val;
        if (val > 0)
            cnt++;
    }
    cout << cnt << " valores positivos" << endl;

    return 0;
}