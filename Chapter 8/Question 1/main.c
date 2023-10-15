/* Checks numbers for repeated digits*/

#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void) {
    bool digit_seen[N] = {false};
    bool seen[N] = {false};
    bool repeated = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            if (!seen[digit]) {
                seen[digit] = true;
                repeated = true;
            }
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    
    if (repeated) {
        printf("Repeated Digit(s): ");
        for (size_t i = 0; i < N; i++) {
            if (seen[i]) {
                printf("%ld ", i);
            }
        }
        printf("\n");
    } else {
        printf("No Repeated Digit\n");
    }

    return 0;
}