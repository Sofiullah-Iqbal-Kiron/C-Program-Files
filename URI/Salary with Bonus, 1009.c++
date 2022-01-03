// ac

#include <bits/stdc++.h>

int main()
{
    double TOTAL;
    double fixed_salary, total_sold;
    char sallers_name[30];
    scanf("%s %lf %lf", &sallers_name, &fixed_salary, &total_sold);
    TOTAL = fixed_salary + (total_sold * 0.15);
    printf("TOTAL = R$ %.2lf\n", TOTAL);

    return 0;
}