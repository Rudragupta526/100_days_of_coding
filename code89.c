#include <stdio.h>
int charFrequency(char str[], char ch) {
int count = 0;
for (int i = 0; str[i] != '\0'; i++) {
if (str[i] == ch)
count++;
}
return count;
}
int main() {
char str[] = "Hello World";
char ch = 'l';
printf("Frequency of '%c': %d\n", ch, charFrequency(str, ch));
return 0;
}
