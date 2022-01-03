// ac

#include <bits/stdc++.h>

int main()
{
    int T, t = 0, c = 0, r = 0, s = 0, num;
    char sign;
    scanf("%d", &T);
    while (T > 0)
    {
        scanf("%d %c", &num, &sign);
        t += num;
        if (sign == 'C')
            c += num;
        else if (sign == 'R')
            r += num;
        else
            s += num;
        T--;
    }
    printf("Total: %d cobaias\n", t);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f \%\n", (100.0 * c) / t);
    printf("Percentual de ratos: %.2f \%\n", (100.0 * r) / t);
    printf("Percentual de sapos: %.2f \%\n", (100.0 * s) / t);

    return 0;
}