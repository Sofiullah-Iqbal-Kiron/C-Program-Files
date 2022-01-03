// ac

#include <bits/stdc++.h>

int main()
{
    int N, val, pos = 0, i;
    scanf("%d", &N);
    scanf("%d", &val);
    for (i = 1; i < N; i++)
    {
        int curVal;
        scanf("%d", &curVal);
        if (curVal < val)
        {
            val = curVal;
            pos = i;
        }
    }
    printf("Menor valor: %d\n", val);
    printf("Posicao: %d\n", pos);

    return 0;
}