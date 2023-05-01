#include <stdio.h>

int main(void)
{
    int fifty, twenty, ten, five, two, one, total;
    
    printf("Enter a pound amount: ");
    scanf("%d", &total);

    fifty = total / 50;
    total = total % 50;
    twenty = total / 20;
    total = total % 20;
    ten = total / 10;
    total = total % 10;
    five = total / 5;
    total = total % 5;
    two = total / 2;
    total = total % 2;
    one = total;

    printf("£50 notes: %d\n£20 notes: %d\n£10 notes: %d\n£5 notes: %d\n£2 coins: %d\n£1 coins: %d\n", fifty, twenty, ten, five, two, one);

    return 0;
}