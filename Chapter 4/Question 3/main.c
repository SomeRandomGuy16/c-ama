#include <stdio.h>

int main(void) {
    int digit, tens, hundred;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &hundred, &tens, &digit);

    printf("The reversal is: %d%d%d\n", digit, tens, hundred);

    return 0;
}