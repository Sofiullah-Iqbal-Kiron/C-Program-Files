// ac

#include <bits/stdc++.h>

int main()
{
    long long int x, y;
    while (scanf("%lld %lld", &x, &y) != EOF)
    {
        long long int xFact = 1, yFact = 1, i;
        for (i = 2; i <= x; i++)
            xFact *= i;
        for (i = 2; i <= y; i++)
            yFact *= i;
        printf("%lld\n", xFact + yFact);
    }

    return 0;
}