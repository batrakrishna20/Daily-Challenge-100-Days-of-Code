/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming

*/

#include <stdio.h>
#include <string.h>
int main(){
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    char longestWord[100] = "";
    char currentWord[100];
    int maxLength = 0;

    int i = 0, j = 0;
    while (1) {
        if (sentence[i] != ' ' && sentence[i] != '\0' && sentence[i] != '\n') {
            currentWord[j++] = sentence[i];
        } else {
            if (j > 0) {
                currentWord[j] = '\0';
                if (j > maxLength) {
                    maxLength = j;
                    strcpy(longestWord, currentWord);
                }
                j = 0; 
            }
            if (sentence[i] == '\0' || sentence[i] == '\n') {
                break;
            }
        }
        i++;
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}
