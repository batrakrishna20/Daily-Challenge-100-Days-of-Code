/*Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>
void addM(int row, int column, int matrix1[row][column], int matrix2[row][column], int result[row][column]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}
int main(){
int row1, column1, row2, column2;
printf("Enter the number of rows and columns for the first matrix: ");
scanf("%d %d", &row1, &column1);
printf("Enter the number of rows and columns for the second matrix: ");
scanf("%d %d", &row2, &column2);

if (row1 != row2 || column1 != column2) {
    printf("Error: Matrices must have the same dimensions to be added.\n");
    return 1;
}

int matrix1[row1][column1], matrix2[row2][column2], result[row1][column1];
printf("Enter the elements of the first matrix:\n");
for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column1; j++) {
        scanf("%d", &matrix1[i][j]);
    }
}
printf("Enter the elements of the second matrix:\n");
for (int i = 0; i < row2; i++) {
    for (int j = 0; j < column2; j++) {
        scanf("%d", &matrix2[i][j]);
    }
}
addM(row1, column1, matrix1, matrix2, result);
printf("Resultant matrix after addition:\n");
for (int i = 0; i < row1; i++) {
    for (int j = 0; j < column1; j++) {
        printf("%d ", result[i][j]);
    }
    printf("\n");
}

    return 0;
}
