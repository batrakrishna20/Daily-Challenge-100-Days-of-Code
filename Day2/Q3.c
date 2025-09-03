// Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main(){
    float a,b,c,d;
    printf ("Enter length of rectangle :");
    scanf("%f" , &a);
    printf ("Enter breadth of rectangle :");
    scanf("%f" , &b);
    printf ("Area of rectangle :");
    c = a*b;
    printf ("%f \n", c);
    printf (" Perimeter of rectangle :");
    d = 2*(a+b);
    printf ("%f", d);
    return 0;
}
