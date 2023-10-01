#include <stdio.h>

int main() {
    float smallest = 99999999;
    float largest = 0;
    float number;

    while (number > 0) {
       printf("Enter a number: ");
       scanf("%f", &number);

       if (number == 0) {
        break;
       }
       

       if (number < smallest) {
            smallest = number;
       } else if (number > largest) {
        largest = number;
       }        
    }

    printf("Smallest number: %f\n", smallest);
    printf("Largest number: %f\n", largest);
    
    
    return 0;
}