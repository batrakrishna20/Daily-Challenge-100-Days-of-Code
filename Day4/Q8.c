// Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main() {
    int a,c;
    printf("Enter Number for which you want to find sum: ");
    scanf("%d", &a);
    for(int b=1;b<=a;b++){
        c = c + b;
    }
    printf("Sum of number is ");

    printf("%d",c);
}
