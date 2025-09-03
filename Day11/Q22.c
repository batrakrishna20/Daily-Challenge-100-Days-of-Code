// Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>

int main() {
    float a, b ,c, d, e;

    printf("Enter Cost Price: ");
    scanf("%f", &a);

    printf("Enter Selling Price: ");
    scanf("%f", &b);

    if (b > a) {
        c = b - a;
        e = (c / a) * 100;
        printf("Profit = %.2f\n", c);
        printf("Profit Percentage = %.2f%%\n", e);
    }
    else if (a > b) {
        d = a - b;
        e = (d / a) * 100;
        printf("Loss = %.2f\n", d);
        printf("Loss Percentage = %.2f%%\n", e);
    }
    else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
