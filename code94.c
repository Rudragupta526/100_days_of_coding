#include <stdio.h>
#include <string.h>
void longestWord(char str[]) {
char word[50], longest[50];
int i = 0, j = 0, maxLen = 0;
while (str[i] != '\0') {
if (str[i] != ' ' && str[i] != '\n') {
word[j++] = str[i];
} else {
word[j] = '\0';
if (strlen(word) > maxLen) {
maxLen = strlen(word);
strcpy(longest, word);
}
j = 0;
}
i++;
}
word[j] = '\0';
if (strlen(word) > maxLen) {
strcpy(longest, word);
}
printf("Longest word: %s\n", longest);
}
int main() {
char str[] = "I love programming in C language";
longestWord(str);  
return 0;
}
