/*Q73: Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

void sumofrow(int row, int colum, int matrix[row][colum], int sum[]) {
    for (int i = 0; i < row; i++) {
        sum[i] = 0;
        for (int j = 0; j < colum; j++) {
            sum[i] += matrix[i][j];
        }
    }
}

int main() {
    int row, colum;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &row, &colum);

    int matrix[row][colum];
    int sum[row];

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colum; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    sumofrow(row, colum, matrix, sum);

    printf("Row sums: ");
    for (int i = 0; i < row; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
