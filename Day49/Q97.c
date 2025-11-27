/*Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.

*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    int len = strlen(name);
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    if (len > 0 && name[0] != ' ') {
        printf("%c.", name[0]);
    }

    for (int i = 1; i < len; i++) {
        if (name[i] == ' ' && i + 1 < len && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }
    printf("\n");
    return 0;
}
