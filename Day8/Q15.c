//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include <stdio.h>
int main() {
    char a;
    printf("Enter a character: ");
    scanf(" %c", &a);   // The space before %c skips any leftover newline

    if (a >= 'A' && a <= 'Z') {
        printf("%c is an uppercase alphabet.\n", a);
    }
    else if (a >= 'a' && a <= 'z') {
        printf("%c is a lowercase alphabet.\n", a);
    }
    else if (a >= '0' && a <= '9') {
        printf("%c is a digit.\n", a);
    }
    else {
        printf("%c is a special character.\n", a);
    }
}
