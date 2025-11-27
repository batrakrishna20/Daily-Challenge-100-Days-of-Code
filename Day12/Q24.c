//Q24: Write a program to calculate an electricity bill based on units consumed.

/*
Sample Test Cases:
Input 1:
50
Output 1:
Bill: ₹250

Input 2:
150
Output 2:
Bill: ₹950

Input 3:
250
Output 3:
Bill: ₹2200

*/
#include <stdio.h.>

int main(){
int units;
int bill;
printf("Enter the no.of units consumed: ");
scanf("%d",&units);

if(units<100){
    bill=units*5;
}
else if(units>=100 && units<200){
    bill=(units*7)-100;
}
else if(units>200){
    bill=(units*10)-300;
} 
  else{
    bill=0;}

printf("Your bill is:₹%d\n", bill);

 return 0;
}
