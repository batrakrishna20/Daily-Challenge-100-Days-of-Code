//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s

*/

#include <stdio.h>
#include <string.h>

char find_first_repeating_char(const char *str) {
    int seen[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        char current_char = str[i];
    if (current_char >= 'a' && current_char <= 'z') {
        int index = current_char - 'a';
            if (seen[index] == 1) {
                return current_char;
            } else {
                seen[index] = 1;
            }
        }
    }
    return '\0'; 
}

int main() {
    char input1[50];
    printf("Enter a word:");
    scanf("%s",input1);
    char result1 = find_first_repeating_char(input1);
    
    printf("Input 1: %s\n", input1);
    if (result1 != '\0') {
        printf("Output 1: %c\n", result1);
    } else {
        printf("Output 1: No repeating lowercase character found.\n");
    }
    char input2[50];
    printf("Enter another word:");
    scanf("%s",input2);
    char result2 = find_first_repeating_char(input2);
    
    printf("\nInput 2: %s\n", input2);
    if (result2 != '\0') {
        printf("Output 2: %c\n", result2);
    } else {
        printf("Output 2: No repeating lowercase character found.\n");
    }

    return 0;
}
