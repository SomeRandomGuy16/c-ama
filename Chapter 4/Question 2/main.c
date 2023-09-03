#include <stdio.h>

int main(void) {
    int digit, tens, hundred, whole_number;

    printf("Enter a three digit number: ");
    scanf("%d", &whole_number);
    digit = whole_number % 10;
    tens = ((whole_number % 100) - digit) / 10;
    hundred = whole_number / 100;

    printf("The reversal is: %d%d%d\n", digit, tens, hundred);

    return 0;
}