// ac

#include <bits/stdc++.h>

int main()
{
    while (1)
    {
        int x, y, i, sum = 0;
        scanf("%d %d", &x, &y);
        if (x <= 0 || y <= 0)
            break;
        if (x > y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        for (i = x; i <= y; i++)
        {
            printf("%d ", i);
            sum += i;
        }
        printf("Sum=%d\n", sum);
    }

    return 0;
}