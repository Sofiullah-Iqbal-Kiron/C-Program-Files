// ac

#include <bits/stdc++.h>

int main()
{
    double x;
    scanf("%lf", &x);
    int i;
    for (i = 0; i < 100; i++)
    {
        printf("N[%d] = %.4f\n", i, x);
        x /= 2;
    }
    return 0;
}