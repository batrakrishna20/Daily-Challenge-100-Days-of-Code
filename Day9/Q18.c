//Write a program to assign grades based on a percentage input.
#include <stdio.h>

int main() {
    float percentage;

    printf("Enter your percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 90)
        printf("Your grade is: A\n");
    else if (percentage >= 80)
        printf("Your grade is: B\n");
    else if (percentage >= 70)
        printf("Your grade is: C\n");
    else if (percentage >= 60)
        printf("Your grade is: D\n");
    else
        printf("Your grade is: F\n");

    return 0;
}
