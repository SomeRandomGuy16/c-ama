#include <stdio.h>

int main(void) {
    int first_num, second_num;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &first_num, &second_num);

    if (first_num == 0) {
        printf("Equivalent 12-hour time: 12:%.2d AM\n", second_num);
    } else if (first_num <= 11) {
        printf("Equivalent 12-hour time: %d:%.2d AM\n", first_num, second_num);
    } else if (first_num == 12) {
        printf("Equivalent 12-hour time: 12:%.2d PM\n", second_num);
    } else {
        first_num = first_num - 12;
        printf("Equivalent 12-hour time: %d:%.2d PM\n", first_num, second_num);
    }
    
    return 0;
}