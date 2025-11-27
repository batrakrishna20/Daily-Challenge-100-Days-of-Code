//Q35: Write a program to print all factors of a given number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/

#include <stdio.h>

int main(){

int num, i,rem;
printf("Enter a number: ");
scanf("%d", &num);

for(i=1; i<=num; i++){
    if(num%i==0){
        printf("The factors of the number are %d\n", i);

    }else if(i==num){
        printf("No factors found\n");
    }

    }




    return 0;
}
