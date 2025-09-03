// Write a program to calculate the area and circumference of a circle given its radius.
#include <stdio.h>
int main(){
    float a,b,c;
    printf("Radius of circle:");
    scanf("%d", &a );
    printf("Area of circle:");
    b = 3.14*a*a;
    printf("%f", b);
    printf("Circumference of circle:");
    c = 2*3.14*a;
    printf("%f", c);
    return 0;
}
