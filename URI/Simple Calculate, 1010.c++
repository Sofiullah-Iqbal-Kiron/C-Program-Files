// ac

#include <bits/stdc++.h>

int main()
{
    int code_of_product_1, code_of_product_2, number_of_unit_1, number_of_unit_2;
    float price_one_unit_1, price_one_unit_2, VALOR_A_PAGAR;
    scanf("%d %d %f", &code_of_product_1, &number_of_unit_1, &price_one_unit_1);
    scanf("%d %d %f", &code_of_product_2, &number_of_unit_2, &price_one_unit_2);
    VALOR_A_PAGAR = (number_of_unit_1 * price_one_unit_1) + (number_of_unit_2 * price_one_unit_2);
    printf("VALOR A PAGAR: R$ %.2f\n", VALOR_A_PAGAR);

    return 0;
}