#include <stdio.h>

int main () {
    int i1, i2, i3, i4;
    int smallest = 9999;
    int largest = 0;

    printf("Enter four integers: ");
    scanf("%d%d%d%d", &i1, &i2, &i3, &i4);

    if (i1 < smallest) {
        smallest = i1;
    }
    if (i2 < smallest) {
        smallest = i2;    
    }
    if (i3 < smallest) {
        smallest = i3;
    }
    if (i4 < smallest) {
        smallest = i4;
    }

    if (i1 > largest) {
        largest = i1;
    }
    if (i2 > largest) {
        largest = i2;
    }
    if (i3 > largest) {
        largest = i3;
    }
    if (i4 > largest) {
        largest = i4;
    }
    

    printf("The smallest number is: %d\n", smallest);
    printf("The largest number is %d\n", largest);

    return 0;
}