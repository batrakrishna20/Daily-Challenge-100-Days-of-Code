//Q42: Write a program to check if a number is a perfect number.

/*
Sample Test Cases:
Input 1:
6
Output 1:
Perfect number

Input 2:
10
Output 2:
Not perfect number

*/
#include <stdio.h>

int main(){


int num,n,sum=0; 

printf("Enter a number:");
scanf("%d", &num);

for(n=1;n < num ;n++){
  if(num%n ==0){
    sum+=n;
}
}

if (sum == num){
    printf("Perfect number");
} else{
    printf("Not a perfect number");
}

printf("\n");

return 0;
}
