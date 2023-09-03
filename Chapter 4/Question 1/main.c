#include <stdio.h>

int main(void) {
    int digit, tens, whole_number;

    printf("Enter a two digit number: ");
    scanf("%d", &whole_number);
    digit = whole_number % 10;
    tens = whole_number / 10;

    printf("The reversal is: %d%d\n", digit, tens);

    return 0;
}