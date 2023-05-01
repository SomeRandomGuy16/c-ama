#include <stdio.h>

int main(void)
{
    float valueOfX;

    printf("Enter the value of x: ");
    scanf("%f", &valueOfX);

    float polynomial = ((((3.0f * valueOfX + 2) * valueOfX - 5 ) * valueOfX - 1) * valueOfX + 7) * valueOfX - 6;

    //note to self, research horner's rule

    printf("The answer is: %.2f", polynomial);
}