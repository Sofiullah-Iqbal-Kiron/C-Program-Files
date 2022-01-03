// ac

#include <bits/stdc++.h>

int main()
{
    char c;
    scanf("%c", &c);
    double m[12][12];
    int i, j;
    for (i = 0; i < 12; i++)
        for (j = 0; j < 12; j++)
            scanf("%lf", &m[i][j]);
    double sum = 0.0;
    for (i = 0; i < 12; i++)
        for (j = i + 1; j < 12; j++)
            sum += m[i][j];
    if (c == 'S')
        printf("%.1lf\n", sum);
    else
        printf("%.1lf\n", sum / 66);
    return 0;
}