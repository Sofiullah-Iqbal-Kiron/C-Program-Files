/* not ac yet */

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, CASE = 1;
    scanf("%d", &t);
    while (t--)
    {
        string main, sub;
        scanf("%s%s", &main, &sub);
        int start = 0, length = sub.size(), count = 0;
        while (start <= main.size() - length)
        {
            if (main.substr(start, length) == sub)
                count++;
            start++;
        }
        printf("Case %d: %d\n", CASE, count);
        CASE++;
    }
}