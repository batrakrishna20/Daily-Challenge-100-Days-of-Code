/*Q76: Check if a matrix is symmetric.


Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/


#include <stdio.h>

int main() {
    int n, i, j, flag = 1;
    printf("Enter size of square matrix (n x n): ");
    scanf("%d", &n);

    int matrix[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
        if (flag == 0) break;
    }

    if (flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
