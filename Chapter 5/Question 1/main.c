#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number <= 9 && number >= 0) {
        printf("The number %d has one digit\n", number);
    } else if (number >= 10 && number <= 99) {
        printf("The number %d has two digits\n", number);
    } else if (number >= 100 && number <= 999) {
        printf("The number %d has three digits\n", number);
    } else if (number >= 1000 && number <= 9999) {
        printf("The number %d has four digits\n", number);
    } else {
        printf("The number %d has more than four digits\n", number);
    }
    
    return 0;
}