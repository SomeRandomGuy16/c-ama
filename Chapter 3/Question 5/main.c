#include <stdio.h>

int main(void) {
    //purposefully not using arrays, want to kill myself
    int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, twlefth, thirteenth, fourteenth, fifteenth, sixteenth;
    int row_sums_one, row_sums_two, row_sums_three, row_sums_four;
    int column_sums_one, column_sums_two, column_sums_three, column_sums_four;
    int diagonal_sums_one, diagonal_sums_two;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &first, &second, &third, &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh, &twlefth, &thirteenth, &fourteenth, &fifteenth, &sixteenth);

    row_sums_one = first + second + third + fourth;
    row_sums_two = fifth + sixth + seventh + eighth;
    row_sums_three = ninth + tenth + eleventh + twlefth;
    row_sums_four = thirteenth + fourteenth + fifteenth + sixteenth;

    column_sums_one = first + fifth + ninth + thirteenth;
    column_sums_two = second + sixth + tenth + fourteenth;
    column_sums_three = third + seventh + eleventh + fifteenth;
    column_sums_four = fourth + eighth + twlefth + sixteenth;

    diagonal_sums_one = first + sixth + eleventh + sixteenth;
    diagonal_sums_two = thirteenth + tenth + seventh + fourth;

    printf("\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n%d %d %d %d\n", first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, twlefth, thirteenth, fourteenth, fifteenth, sixteenth);
    printf("Row sums:\t%d %d %d %d\n", row_sums_one, row_sums_two, row_sums_three, row_sums_four);
    printf("Column sums:\t%d %d %d %d\n", column_sums_one, column_sums_two, column_sums_three, column_sums_four);
    printf("Diagonal sums:\t%d %d\n", diagonal_sums_one, diagonal_sums_two);

    return 0;
}