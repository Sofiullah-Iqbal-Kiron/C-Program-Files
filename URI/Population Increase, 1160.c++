// ac

#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int pa, pb, anos = 0;
        double g1, g2;
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        while (pa <= pb)
        {
            pa *= (g1 / 100.0) + 1.0;
            pb *= (g2 / 100.0) + 1.0;
            anos++;
            if (anos > 100)
            {
                printf("Mais de 1 seculo.\n");
                break;
            }
        }
        if (anos <= 100)
            printf("%d anos.\n", anos);
    }
    return 0;
}