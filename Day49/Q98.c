/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe

*/
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    printf("Enter a name: ");
    fgets(sentence, sizeof(sentence), stdin);
    int len = strlen(sentence);

  if (sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
        len--;
    }
    int last_space_index = -1;
for (int k = len - 1; k >= 0; k--) {
        if (sentence[k] == ' ') {
            last_space_index = k;
            break;
        }
    }
 if (last_space_index == -1) {
     if (len > 0) {
            printf("%s\n", sentence);
        }
        return 0;
    }
 if (len > 0 && sentence[0] != ' ') {
        printf("%c.", sentence[0]);
    }
 for (int j = 1; j < last_space_index; j++) {
        if (sentence[j] == ' ' && sentence[j + 1] != ' ') {
            printf("%c.", sentence[j + 1]);
        }
    }
    printf(" %s\n", &sentence[last_space_index + 1]);

    return 0;
}
