//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,e,f;
    printf("Write the coffient of x^2 :");
    scanf("%d",&a);
    printf("Write the coffient of x :");
    scanf("%d",&b); 
    printf("Write the constant :");
    scanf("%d",&c);
    d= (-b+sqrt(pow(b,2)-4*a*c))/2*a;
    e= (-b-sqrt(pow(b,2)-4*a*c))/2*a;
    f= b*b -4*a*c;
    if(f>0){
        printf("Roots are real and different %d, %d",d,e);
    }
    else if(f==0){
        printf("Roots are real and equal %d",d);
    }
    else{
        printf("Roots are complex");
    }

}
