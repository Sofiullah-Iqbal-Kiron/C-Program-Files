// ac

#include <bits/stdc++.h>

int main()
{
    int i;
    for (i = 0; i < 100; i++)
    {
        double num;
        scanf("%lf", &num);
        if (num <= 10.0)
            printf("A[%d] = %.1lf\n", i, num);
    }

    return 0;
}