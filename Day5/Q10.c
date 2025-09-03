// Write a program to input time in seconds and convert it to hours:minutes:seconds format.
#include <stdio.h>
int main() {
    int a,b,c,d;
    printf("Write time in seconds:");
    scanf("%d", &a);
    b = a / 3600;
    c = ( a % 3600)/60;
    d = a % 60;
    printf("Time = %02d:%02d:%02d\n", b, c, d);
}
