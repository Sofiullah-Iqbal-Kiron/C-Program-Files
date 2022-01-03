// ac

#include <bits/stdc++.h>

int main()
{
    double M[12][12];
    char C[2];
    int L, i, j;
    scanf("%d", &L);
    scanf("%s", &C);
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &M[i][j]);
    double sum = 0.0;
    for (i = 0; i < 12; i++)
        sum += M[L][i];
    if (C[0] == 'S')
        printf("%.1lf", sum);
    else
        printf("%.1lf", sum / 12);

    return 0;
}