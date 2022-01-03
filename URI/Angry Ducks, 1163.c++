// ac

#include <bits/stdc++.h>

double find_range(double angle, double velocity, double height, double gravity)
{
    double vx = velocity * cos((angle * 3.14159) / 180), vy = velocity * sin((angle * 3.14159) / 180);

    return vx * (vy + sqrt(vy * vy + 2 * gravity * height)) / gravity;
}

int main()
{
    double h;
    while (scanf("%lf", &h) != EOF)
    {
        int p1, p2, n, i;
        scanf("%d %d", &p1, &p2);
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            double a, v, r;
            scanf("%lf %lf", &a, &v);
            r = find_range(a, v, h, 9.80665);
            if (!(r >= p1 && r <= p2))
                printf("%.5f -> NUCK\n", r);
            else
                printf("%.5f -> DUCK\n", r);
        }
    }

    return 0;
}