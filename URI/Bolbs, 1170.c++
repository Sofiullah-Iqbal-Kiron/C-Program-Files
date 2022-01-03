// ac

#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double x;
        scanf("%lf", &x);
        int dias = 0;
        while (x > 1)
        {
            x /= 2;
            dias++;
        }
        printf("%d dias\n", dias);
    }
    return 0;
}