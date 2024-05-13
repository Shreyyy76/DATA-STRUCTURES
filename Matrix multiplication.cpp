#include <stdio.h>

#define ROW1 2
#define COL1 2
#define ROW2 2
#define COL2 2

int main() {
    int matrix1[ROW1][COL1] = {{1, 2}, {3, 4}};
    int matrix2[ROW2][COL2] = {{1, 0}, {0, 1}};
    int result[ROW1][COL2];

    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < COL1; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Resultant Matrix:\n");
    for (int i = 0; i < ROW1; i++) {
        for (int j = 0; j < COL2; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
