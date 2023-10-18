#include <stdio.h>

int main(void) {
    int rows[5][5] = {{0}};

    for (size_t i = 0; i < 5; i++) {
        printf("Enter row %zu: ", i + 1);
        scanf("%d %d %d %d %d", &rows[i][0], &rows[i][1], &rows[i][2], &rows[i][3], &rows[i][4]);
    }
    
    printf("\nRow totals: ");
    for (size_t i = 0; i < 5; i++) {
        printf("%d ", rows[i][0] + rows[i][1] + rows[i][2] + rows[i][3] + rows[i][4]);
    }

    printf("\nColumn totals: ");
    for (size_t i = 0; i < 5; i++) {
        printf("%d ", rows[0][i] + rows[1][i] + rows[2][i] + rows[3][i] + rows[4][i]);
    }

    printf("\n");

    return 0;
}