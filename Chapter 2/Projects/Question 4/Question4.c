#include <stdio.h>

int main(void)
{
    float money;

    printf("Enter an amount: ");
    scanf("%f", &money);
    printf("With VAT added: £%.2f", money + (money * 0.2));
}