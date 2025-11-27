/*Q95: Check if one string is a rotation of another.

/*
Sample Test Cases:
Input 1:
abcde
deabc
Output 1:
Rotation

Input 2:
abc
acb
Output 2:
Not rotation

*/
#include <stdio.h>
#include <string.h>

int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2 || len1 == 0) {
        return 0;
    }

    char temp[200];
    strcpy(temp, str1);
    strcat(temp, str1);

    if (strstr(temp, str2) != NULL) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char s1[100];
    char s2[100];

    printf("Enter the first string: ");
    scanf("%99s", s1);
    
    printf("Enter the second string: ");
    scanf("%99s", s2);

    if (isRotation(s1, s2)) {
        printf("\"%s\" is a rotation of \"%s\".\n", s2, s1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\".\n", s2, s1);
    }

    return 0;
}
