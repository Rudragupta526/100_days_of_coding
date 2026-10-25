#include <stdio.h>
#include <string.h>
#include <ctype.h>
void toLowercase(char str[]) {
for (int i = 0; str[i] != '\0'; i++) {
str[i] = tolower(str[i]);
}
}
int areAnagrams(char str1[], char str2[]) {
int freq[26] = {0};
toLowercase(str1);
toLowercase(str2);
if (strlen(str1) != strlen(str2)){
return 0;
for (int i = 0; str1[i] != '\0'; i++) {
if (isalpha(str1[i])){
freq[str1[i] - 'a']++;
}
}
for (int i = 0; str2[i] != '\0'; i++) {
if (isalpha(str2[i])){
freq[str2[i] - 'a']--;
}
}
for(int i = 0; i < 26; i++) {
if (freq[i] != 0){
 return 0;
}
return 1;
}
int main() {
char str1[] = "listen";
char str2[] = "silent";
if (areAnagrams(str1, str2)){
printf("Anagrams\n");
}
else{
printf("Not Anagrams\n");
}
return 0;
}
