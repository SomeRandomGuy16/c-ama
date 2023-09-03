#include <stdio.h>

int main(void) {
    int first_digit, second_digit, third_digit, fourth_digit, fifth_digit, original_number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &original_number);
    fifth_digit = original_number % 8;
    original_number = original_number / 8;
    fourth_digit = original_number % 8;
    original_number = original_number / 8;
    third_digit = original_number % 8;
    original_number = original_number / 8;
    second_digit = original_number % 8;
    original_number = original_number / 8;
    first_digit = original_number % 8;

    printf("In octal, your number is: %d%d%d%d%d\n", first_digit, second_digit, third_digit, fourth_digit, fifth_digit);


    return 0;
}