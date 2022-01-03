// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int numbers[] = {2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t;
    cin >> t;
    while (t--)
    {
        string token;
        cin >> token;
        int ans = 0;
        for (int i = 0; i < token.size(); i++)
            ans += token[i] == '0' ? 6 : numbers[(token[i] - '0') - 1];

        cout << ans << " leds" << endl;
    }
}