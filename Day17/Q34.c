//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/

#include <stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    for(number!=0; number>1; number--){
        if(number%2==0){
            printf("Not prime\n");
            break;
        }else{
            printf("Prime\n");
            break;
        }
    }
}
