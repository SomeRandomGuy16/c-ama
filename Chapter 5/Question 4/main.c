#include <stdio.h>

int main(void) {
    float speed;

    printf("Enter the speed in knots: ");
    scanf("%f", &speed);

    printf("The wind description is: ");
    if (speed < 1) {
        printf("calm");
    } else if (speed >= 1 && speed < 4) {
        printf("light air");
    } else if  (speed >= 4 && speed < 28) {
        printf("breeze");
    } else if (speed >= 28 && speed < 48) {
        printf("gale");
    } else if (speed >= 48 && speed <= 63) {
        printf("storm");
    } else {
        printf("hurricane");
    }

    printf("\n");

    return 0;
}