// ac

#include <bits/stdc++.h>

int main()
{
    int t, i;
    scanf("%d", &t);
    long long int fib[61];
    fib[0] = 0;
    fib[1] = 1;
    fib[2] = 1;

    for (i = 3; i < 61; i++)
        fib[i] = fib[i - 1] + fib[i - 2];
    while (t--)
    {
        int n;
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, fib[n]);
    }

    return 0;
}