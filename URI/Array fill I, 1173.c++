// ac

#include <bits/stdc++.h>

int main()
{
    int v, i;
    scanf("%d", &v);
    int N[10];

    N[0] = v;
    for (i = 1; i < 10; i++)
        N[i] = 2 * N[i - 1];
    for (i = 0; i < 10; i++)
        printf("N[%d] = %d\n", i, N[i]);

    return 0;
}