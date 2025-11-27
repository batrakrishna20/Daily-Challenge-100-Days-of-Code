//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/

#include <stdio.h>
int main(){

    int num, reversed=0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0){
        rem = num % 10;
        reversed = reversed * 10 + rem;
        num = num / 10;
    }

    printf("Reversed Number: %d\n", reversed);


    return 0;
}
