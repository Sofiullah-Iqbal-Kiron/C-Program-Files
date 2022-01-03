// ac

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nota, r100, r50, r20, r10, r5, r2, r1;
    scanf("%d", &nota);
    r100 = nota / 100;
    r50 = (nota % 100) / 50;
    r20 = ((nota % 100) % 50) / 20;
    r10 = (((nota % 100) % 50) % 20) / 10;
    r5 = ((((nota % 100) % 50) % 20) % 10) / 5;
    r2 = (((((nota % 100) % 50) % 20) % 10) % 5) / 2;
    r1 = ((((((nota % 100) % 50) % 20) % 10) % 5) % 2) / 1;

    printf("%d\n", nota);
    printf("%d nota(s) de R$ 100,00\n", r100);
    printf("%d nota(s) de R$ 50,00\n", r50);
    printf("%d nota(s) de R$ 20,00\n", r20);
    printf("%d nota(s) de R$ 10,00\n", r10);
    printf("%d nota(s) de R$ 5,00\n", r5);
    printf("%d nota(s) de R$ 2,00\n", r2);
    printf("%d nota(s) de R$ 1,00\n", r1);

    return 0;
}