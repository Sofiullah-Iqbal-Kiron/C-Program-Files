// ac

#include <bits/stdc++.h>

int main()
{
    int N[20], i;
    for (i = 0; i < 20; i++)
        scanf("%d", &N[i]);
    for (i = 19; i >= 0; i--)
        printf("N[%d] = %d\n", 20 - i - 1, N[i]);

    return 0;
}