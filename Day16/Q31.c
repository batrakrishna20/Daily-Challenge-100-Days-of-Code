//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main(){

   int decimal, binary[32],i=0;
   printf("Enter a number:");
   scanf("%d", &decimal);
   if (decimal==0){
     printf("Binary: 0\n");
     }
     while (decimal>0){
        binary[i]=decimal%2;
        decimal=decimal/2;
        i++;
     }
     printf("Binary: ");
     for (i=i-1;i>=0;i--){
        printf("%d", binary[i]);
     }
        printf("\n");

    return 0;
}
