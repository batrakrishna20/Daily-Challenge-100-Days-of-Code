/*Q101: Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

/*
Sample Test Cases:
Input 1:
nums = [5,7,7,8,8,10], target = 8
Output 1:
3,4

Input 2:
 nums = [5,7,7,8,8,10], target = 6
Output 2:
-1,-1

Input 3:
 nums = [5,7,7,8,8,10], target = 10
Output 3:
5,5

*/

#include <stdio.h>

#define ARRAY_SIZE 6

int find_occurrence(const int  nums[],int size,int target,int search_first){
    int low = 0;
    int high = size - 1;
    int result = -1; 

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            result = mid; 
            
            if (search_first) {
                
                high = mid - 1; 
            } else {
                
                low = mid + 1;
            }
        } else if (nums[mid] < target) {
            
            low = mid + 1;
        } else {
         
            high = mid - 1;
        }
    }
    return result;
}

int main() {
    int nums[ARRAY_SIZE];
    int target;
    int i;

    printf("Enter the elements of the  Array\n");
 
    for (i = 0; i < ARRAY_SIZE; i++) {
        printf("Enter element %d: ", i);
        if (scanf("%d", &nums[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            return 1;
        }
    }

    printf("\nEnter the target number: ");
    if (scanf("%d", &target) != 1) {
        printf("Invalid input. Exiting.\n");
        return 1;
    }

    int first_index = find_occurrence(nums, ARRAY_SIZE, target, 1);

    if (first_index == -1) {
        printf("\n%d,%d\n", -1, -1);
    } else {
  
        int last_index = find_occurrence(nums, ARRAY_SIZE, target, 0);
        
        printf("\n%d,%d\n", first_index, last_index);
    }

    return 0;
}
