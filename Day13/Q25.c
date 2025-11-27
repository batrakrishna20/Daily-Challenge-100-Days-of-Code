//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/

#include <stdio.h>
#include <string.h>
int main(){
    float num1;
    float num2;
    char operator;
    float result1,result2,result3,result4;
    printf("Enter the first number:");
    scanf("%f", &num1);
    printf("Enter the second number:");
    scanf("%f", &num2);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    result1=num1 +num2;
    result2= num1-num2;
    result3=num1*num2;
    result4=num1/num2;
    switch(operator){
        case '+':
           printf("%.2f+%.2f=%.2f",num1,num2,result1);
           break;
           case '-':
           printf("%.2f-%.2f=%.2f",num1,num2,result2);
           break;
           case '*':
              printf("%.2f*%.2f=%.2f",num1,num2,result3);
              break;
              case '/':
              if(num2!=0){
                  printf("%.2f/%.2f=%.2f",num1,num2,result4);
                }else{
                    printf("Error: Division by zero is not allowed.");
                
              }
              break;
              default:
              printf("Error: Invalid operator.");
                break;
    }
    return 0;
}
