//Write a program to input an integer and check whether it is even or odd using if–else.
#include <stdio.h>
int main(){
    int a;
    printf("Write the number you want to check:");
    scanf("%d", &a);
    if (a % 2== 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}
