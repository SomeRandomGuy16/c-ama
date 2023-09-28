#include <stdio.h>

int main() {
    int grade;

    printf("Enter numerical grade: ");
    scanf("%d", &grade);

    grade = grade / 10;

    printf("Letter Grade: ");

    switch (grade) {
    case 10:
    case 9:
        printf("A\n");
        break;
    case 8:
        printf("B\n");
        break;
    case 7:
        printf("C\n");
        break;
    case 6:
        printf("D\n");
        break;
    
    default:
        printf("F\n");
        break;
    }

    return 0;
}