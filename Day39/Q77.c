/*Q77: Check if the elements on the diagonal of a matrix are distinct.


Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);

    int matrix[rows][cols];
    int diag[rows]; 

    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    if (rows != cols) {
        printf("False\n");
        return 0;
    }

    int isDistinct = 1;
    for (int i = 0; i < rows; i++) {
        diag[i] = matrix[i][i];
        for (int j = 0; j < i; j++) {
            if (diag[i] == diag[j]) {
                isDistinct = 0;
                break;
            }
        }
        if (!isDistinct) break;
    }

    printf("%s\n", isDistinct ? "True" : "False");
    return 0;
}
