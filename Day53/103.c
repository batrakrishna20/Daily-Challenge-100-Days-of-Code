/*Q103: Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

/*
Sample Test Cases:
Input 1:
nums = [1,7,3,6,5,6]
Output 1:
3

Input 2:
nums = [1,2,3]
Output 2:
-1

Input 3:
nums = [2,1,-1]
Output 3:
0

*/
#include <stdio.h>
#include <stddef.h> 
int findPivotIndex(int* nums, int numsSize) {
    if (numsSize == 0) {
        return -1;
    }

    long long totalSum = 0;
    for (int i = 0; i < numsSize; i++) {
        totalSum += nums[i];
    }

    long long leftSum = 0;

    for (int i = 0; i < numsSize; i++) {
        long long currentNum = nums[i];
        
        long long rightSum = totalSum - leftSum - currentNum;

        if (leftSum == rightSum) {
            return i;
        }
        
        leftSum += currentNum;
    }

    return -1;
}

int main() {
    int nums1[] = {1, 7, 3, 6, 5, 6};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int result1 = findPivotIndex(nums1, size1);
    printf("Input: [1, 7, 3, 6, 5, 6], Output: %d\n", result1);

    int nums2[] = {1, 2, 3};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int result2 = findPivotIndex(nums2, size2);
    printf("Input: [1, 2, 3], Output: %d\n", result2);

    int nums3[] = {2, 1, -1};
    int size3 = sizeof(nums3) / sizeof(nums3[0]);
    int result3 = findPivotIndex(nums3, size3);
    printf("Input: [2, 1, -1], Output: %d\n", result3);

    int nums4[] = {10};
    int size4 = sizeof(nums4) / sizeof(nums4[0]);
    int result4 = findPivotIndex(nums4, size4);
    printf("Input: [10], Output: %d\n", result4);

    int nums5[] = {1, 1, 1, 3};
    int size5 = sizeof(nums5) / sizeof(nums5[0]);
    int result5 = findPivotIndex(nums5, size5);
    printf("Input: [1, 1, 1, 3], Output: %d\n", result5);

    return 0;
}
