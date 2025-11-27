/*Q61: Search for an element in an array using linear search.


Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int linearSearch(const int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int size;
    if (scanf("%d", &size) != 1 || size <= 0) {
        return 1;
    }

    int arr[size];

    for (int i = 0; i < size; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    int target;
    if (scanf("%d", &target) != 1) {
        return 1;
    }

    int result = linearSearch(arr, size, target);

    if (result != -1) {
        printf("Found at index %d\n", result);
    } else {
        printf("-1\n");
    }

    return 0;
}
