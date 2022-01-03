// ac

#include <bits/stdc++.h>

int main()
{
    int NUMBER, worked_hours_number;
    float SALARY, amount_per_hour;
    scanf("%d %d %f", &NUMBER, &worked_hours_number, &amount_per_hour);
    SALARY = worked_hours_number * amount_per_hour;
    printf("NUMBER = %d\nSALARY = U$ %.2f\n", NUMBER, SALARY);

    return 0;
}