/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>
#include <math.h>

int findPivotInteger(int n) {
    if (n <= 0) {
        return -1;
    }

    long long targetXSquared = (long long)n * (n + 1) / 2;

    long long x = (long long)round(sqrt(targetXSquared));

    if (x * x == targetXSquared && x <= n) {
        return (int)x;
    } else {
        return -1;
    }
}

int main() {
    int n1 = 8;
    int result1 = findPivotInteger(n1);
    printf("Input: n = %d, Output: %d\n", n1, result1);

    int n2 = 1;
    int result2 = findPivotInteger(n2);
    printf("Input: n = %d, Output: %d\n", n2, result2);

    int n3 = 4;
    int result3 = findPivotInteger(n3);
    printf("Input: n = %d, Output: %d\n", n3, result3);

    int n4 = 49;
    int result4 = findPivotInteger(n4);
    printf("Input: n = %d, Output: %d\n", n4, result4);

    int n5 = 100;
    int result5 = findPivotInteger(n5);
    printf("Input: n = %d, Output: %d\n", n5, result5);

    return 0;
}
