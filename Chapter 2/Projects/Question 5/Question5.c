#include <stdio.h>

int main(void)
{
    float valueOfX;

    printf("Enter the value of x: ");
    scanf("%f", &valueOfX);

    float polynomial = ((3.0f * valueOfX * valueOfX * valueOfX * valueOfX * valueOfX) + (2.0f* valueOfX * valueOfX * valueOfX * valueOfX) - (5.0f * valueOfX * valueOfX * valueOfX) - (valueOfX * valueOfX) + (7.0f * valueOfX)) - 6.0f;

    printf("The answer is: %.2f", polynomial);
}