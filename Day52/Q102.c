/*Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

/*
Sample Test Cases:
Input 1:
arr = [1, 2, 8, 10, 11, 12, 19], x = 5x
Output 1:
2

Input 2:
arr = [1, 2, 8, 10, 11, 12, 19], x = 20
Output 2:
-1

Input 3:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 0
Output 3:
0

Input 4:
arr = [1, 1, 2, 8, 10, 11, 12, 19], x = 2
Output 4:
2

*/
#include <stdio.h>
#include <stdlib.h> 

#define MAX_ARRAY_SIZE 8 

int find_ceilind(const int arr[], int size, int x) {
    int low = 0;
    int high = size - 1;
    int ceilind = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x) {
            ceilind = mid;
            high = mid - 1;
        } else if (arr[mid] > x) {
            ceilind = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    return ceilind;
}

int main() {
    int arr[MAX_ARRAY_SIZE];
    int size;
    int x;
    int i;

    printf("Enter the size of the array (max %d): ", MAX_ARRAY_SIZE);
    if (scanf("%d", &size) != 1 || size <= 0 || size > MAX_ARRAY_SIZE) {
        printf("Invalid array size. Using default size of %d.\n", MAX_ARRAY_SIZE);
        size = MAX_ARRAY_SIZE;
    }

    printf("Enter the Sorted Array Elements \n");
    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return EXIT_FAILURE;
        }
    }
    -
    printf("\nEnter the target value (x): ");
    if (scanf("%d", &x) != 1) {
        printf("Invalid input. Exiting.\n");
        return EXIT_FAILURE;
    }

    int result_index = find_ceilind(arr, size, x);

    printf("\nInput Array: [");
    for (i = 0; i < size; i++) {
        printf("%d%s", arr[i], (i == size - 1) ? "" : ", ");
    }
    printf("]\n");
    printf("Target x: %d\n", x);

    printf("Output Index: %d\n", result_index);

    return 0;
}
