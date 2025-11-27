//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2

*/
#include <stdio.h>

int main() {
    char str[100];
    char search_char;
    int count = 0;
    int i = 0;

    printf("Enter a string: ");
    if (scanf("%99[^\n]", str) != 1) {
        str[0] = '\0';
    }

    while (getchar() != '\n'); 

    printf("Enter the character to count: ");

    if (scanf("%c", &search_char) != 1) {
        return 1;
    }

    while (str[i] != '\0') {
        if (str[i] == search_char) {
            count++;
        }
        i++;
    }

    printf("%d\n", count);

    return 0;
}
