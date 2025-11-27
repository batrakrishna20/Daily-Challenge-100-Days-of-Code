/*Q74: Find the transpose of a matrix.


Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

void transpose(int row, int column, int matrix[row][column], int transposed[column][row]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int row, column;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &column);

    int matrix[row][column];
    int transposed[column][row]; 

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    transpose(row, column, matrix, transposed);

    printf("Transposed matrix:\n");
    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }

    return 0;
}
