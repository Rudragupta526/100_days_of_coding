#include <stdio.h>
#include <string.h>
void reverseWord(char word[]) {
int i = 0, j = strlen(word) - 1;
while (i < j) {
char temp = word[i];
word[i] = word[j];
word[j] = temp;
i++;
j--;
}
}
void reverseEachWord(char str[]) {
char word[50];
int i = 0, j = 0;
while (str[i] != '\0') {
if (str[i] != ' ' && str[i] != '\n') {
word[j++] = str[i];
} else {
word[j] = '\0';
reverseWord(word);
printf("%s ", word);
j = 0;
}
i++;
}
word[j] = '\0';
reverseWord(word);
printf("%s\n", word);
}
int main() {
char str[] = "Hello World Program";
reverseEachWord(str);  
return 0;
}
