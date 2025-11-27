//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn

*/
#include <stdio.h>


int vowel_check(char c){
    if (c == 'a' || c == 'e'|| c == 'i' || c == 'o' || c == 'u' ||
        c == 'A' || c == 'E' || c == 'I'|| c == 'O' || c == 'U'){
        return 1;
    }
   
    return 0;
}

void Vowel_removal(char *str){ 
    int read = 0;
    int write = 0;

   
    while (str[read] != '\0'){
        if(!vowel_check(str[read])){
            str[write]=str[read];
            write++;
        }
        read++;
    }
    str[write] = '\0';
}

int main(){
    char str[50];
    printf("Enter a word: ");
    scanf("%49s", str);

    printf("INPUT: %s\n", str);
    Vowel_removal(str);
    printf("OUTPUT: %s\n", str);
    
    return 0;
}
