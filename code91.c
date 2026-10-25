#include <stdio.h>
#include <ctype.h>
void removeVowels(char str[]) {
int i, j = 0;
char result[100];  
for (i = 0; str[i] != '\0'; i++) {
char ch = tolower(str[i]);
if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
result[j++] = str[i];
}
}
result[j] = '\0';  
printf("%s\n", result);
}
int main() {
char str[] = "Hello World";
removeVowels(str);  
return 0;
}
