//Write a program to input three numbers and find the largest among them using if–else.
#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Write first three digit number: ");
    scanf("%d", &a);
    
    printf("Write second three digit number: ");
    scanf("%d", &b);
    
    printf("Write third three digit number: ");
    scanf("%d", &c);

    int d = a;
    if (b > d) d = b;
    if (c > d) d = c;

    printf("%d is the greatest number\n", d);
}
