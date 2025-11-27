//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5

Input 2:
 
Output 2:
1

*/


#include <stdio.h>

int main() {
    char str[100]; 
    int numberChar = 0; 
    
    printf("Enter a word: ");
    
    if (scanf("%99s", str) != 1) { 
        return 1;
    }
    
    for (int i = 0; str[i] != '\0'; i++) { 
        numberChar++;
    }
    
    printf("The number of characters in the word are %d\n", numberChar);

    return 0;
}
