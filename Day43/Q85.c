//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba

*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    char temp;
    int len, i, j;

    printf("Enter a word: ");
    if (scanf("%49s", str) != 1) {
        return 1;
    }
    len = 0;
    while (str[len] != '\0') {
        len++;
    }
    i = 0;
    j = len - 1;

 
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("%s\n", str);

    return 0;
}
