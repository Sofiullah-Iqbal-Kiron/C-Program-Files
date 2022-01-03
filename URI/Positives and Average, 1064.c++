// ac

#include <bits/stdc++.h>

int main()
{
    int counter = 0, i;
    double posSum = 0.0;
    for (i = 0; i < 6; i++)
    {
        double val;
        scanf("%lf", &val);
        if (val > 0.0)
        {
            counter++;
            posSum += val;
        }
    }
    printf("%d valores positivos\n", counter);
    printf("%.1f\n", posSum / counter);

    return 0;
}