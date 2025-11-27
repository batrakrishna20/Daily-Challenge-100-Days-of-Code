/*Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams

*/
#include <stdio.h>
int main(){

char str1[100], str2[100];

printf("Enter first string: ");
scanf("%s", str1);
printf("Enter second string: ");
scanf("%s", str2);

int count1[26] = {0}, count2[26] = {0};

for(int i = 0; str1[i] != '\0'; i++){
    count1[str1[i] - 'a']++;
}
for(int i = 0; str2[i] != '\0'; i++){
    count2[str2[i] - 'a']++;
}
int areAnagrams = 1;
for(int i = 0; i < 26; i++){
    if(count1[i] != count2[i]){
        areAnagrams = 0;
        break;
    }
    else{
        areAnagrams = 1;
        continue;
    }
}
if(!areAnagrams){
    printf("Not anagrams\n");
}
else {
    printf("Anagrams\n");
}



    return 0;
}
