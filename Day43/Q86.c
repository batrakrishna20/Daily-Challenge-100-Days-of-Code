//Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome

*/
#include <stdio.h>

int main() {
    char str[50];
    int len = 0;
    int i, j;
    int is_palindrome = 1;

    printf("Enter a word: ");
    if (scanf("%49s", str) != 1) {
        return 1;
    }


    while (str[len] != '\0') {
        len++;
    }
    i = 0;
    j = len - 1;
    while (i < j) {
        if (str[i] != str[j]) {
            is_palindrome = 0; 
            break;
        }
        i++;
        j--;
    }

    if (is_palindrome) {
        printf("Palindrome\n");
    } else {
        printf("Not palindrome\n");
    }

    return 0;
}
