/* Checks numbers for repeated digits*/

#include <stdio.h>
#include <stdbool.h>

#define N 10

int main(void) {
    int seen[N] = {0};
    bool repeated = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
            if (seen[digit] > 0) {
                repeated = true;
            }
        seen[digit] += 1;
        n /= 10;
    }
    
    if (repeated) {
        printf("Digit:\t\t0 1 2 3 4 5 6 7 8 9\n");
        printf("Occurrences:\t");
        for (size_t i = 0; i < N; i++) {
            printf("%d ", seen[i]);
        }
        printf("\n");
    } else {
        printf("No Repeated Digit\n");
    }

    return 0;
}