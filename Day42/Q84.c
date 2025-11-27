//Q84: Convert a lowercase string to uppercase without using built-in functions.

/*
Sample Test Cases:
Input 1:
hello
Output 1:
HELLO

*/
#include <stdio.h>

int main() {
    char str[50];
    printf("Enter a word: ");
    
    if (scanf("%49s", str) != 1) {
        return 1;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
          str[i]=str[i]-32; 
        }
    }

    printf("%s\n", str);

    return 0;
}
