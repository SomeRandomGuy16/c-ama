#include <stdio.h>

int main(void) {
    int item_number, dd, mm, yyyy;
    float unit_price;

    printf("Enter item number:\t\t\t");
    scanf("%d", &item_number);
    printf("Enter unit price:\t\t\t");
    scanf("%f", &unit_price);
    printf("Enter purchase date (dd/mm/yyyy):\t");
    scanf("%d/%d/%d", &dd, &mm, &yyyy);

    printf("\nItem\tUnit Price\tPurchase Date\n%d\t$%10.2f\t\t%d/%d/%d", item_number, unit_price, dd, mm, yyyy);
}