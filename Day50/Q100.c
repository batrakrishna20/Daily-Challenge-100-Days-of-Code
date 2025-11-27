/*Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c

*/
#include <stdio.h>
#include <string.h>

void printSubstrings(char str[]) {
int n = strlen(str);
int i, j, k;

for (i = 0; i < n; i++) {
  for (j = i; j < n; j++) {
   for (k = i; k <= j; k++) {
         printf("%c", str[k]);
            }
if (i != n - 1 || j != n - 1) {
                printf(", ");
            }
        }
    }
    printf("\n");
}

int main() {
char input[100];
    
printf("Enter a string: ");
scanf("%99s", input); 

printf("Output: ");
printSubstrings(input);

    return 0;
}
