/*Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

/*
Sample Test Cases:
Input 1:
15/04/2025
Output 1:
15-Apr-2025

*/
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <string.h>

int main() {
char date_in[15];
char date_out[15];
const char *month_abbr = "Apr";

printf("Enter date (dd/04/yyyy): ");
scanf("%14s", date_in);

strncpy(date_out, date_in, 3);
    date_out[2] = '-';

strcpy(date_out + 3, month_abbr);

strcpy(date_out + 6, date_in + 6);

printf("Output: %s\n", date_out);

    return 0;
}
