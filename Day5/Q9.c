// Write a program to calculate simple and compound interest for given principal, rate, and time.
#include <stdio.h>
#include <math.h>
int main() {
    float a, b,c,d,e,f;
    printf("Enter Principal amount: ");
    scanf("%f", &a);
    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &b);
    printf("Enter Time (in years): ");
    scanf("%f", &c);
    e = (a * b * c) / 100;
    d = a * pow((1 + b / 100), c);
    f = d- a;
    printf("\nSimple Interest = %.2f", e);
    printf("\nCompound Interest = %.2f\n",f);
    return 0;
}
