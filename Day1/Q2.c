// Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>
int main(){
    float a,b,c;
    printf("Enter the value of a and b");
    scanf("%f%f" , &a,&b);
    c = a+b;
    printf("Addition:");
    printf("%f \n" , c);
    c = a-b;
    printf("Difference:");
    printf("%f \n" , c);
    c = a*b;
    printf("Product:");
    printf("%f \n" , c);
    if (b != 0){
        c = a/b;
        printf("Quotient:");
        printf("%f \n", c);
        
    }
    else {
        printf("Quotient: Undefined (division by zero)\n");
    }
    return 0;
}
