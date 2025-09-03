// Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main(){
    int a;
    printf("Write the number you want to check");
    scanf("%d", &a);
    if (a>=0){
        if(a==0){
            printf("It is Zero");
        }
        else{
            printf("It is a positive integer");
        }
    }
    else{
        printf("It is a negative integer");
    }

}
