#include <stdio.h>
void replaceSpaces(char str[]) {
for (int i = 0; str[i] != '\0'; i++) {
if (str[i] == ' ')
str[i] = '-';
}
}
int main() {
char str[] = "Hello World Program";
replaceSpaces(str);
printf("%s\n", str);  // Output: Hello-World-Program
return 0;
}
