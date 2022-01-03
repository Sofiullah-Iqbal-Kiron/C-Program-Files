// ac

#include <bits/stdc++.h>

int main()
{
    int n[1000], t, d = 0, i;
    scanf("%d", &t);
    for (i = 0; i < 1000; i++)
    {
        n[i] = d++;
        if (d == t)
            d = 0;
    }
    for (i = 0; i < 1000; i++)
        printf("N[%d] = %d\n", i, n[i]);

    return 0;
}