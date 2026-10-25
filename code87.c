#include <stdio.h>
#include <ctype.h>
int main() {
char str[] = "Hello 123! How are you?";
int spaces = 0, digits = 0, specials = 0;
for (int i = 0; str[i] != '\0'; i++) {
if (str[i] == ' ')
spaces++;
else if (isdigit(str[i]))
digits++;
else if (!isalpha(str[i]))
specials++;
}
printf("Spaces: %d\n", spaces);
printf("Digits: %d\n", digits);
printf("Special characters: %d\n", specials);
return 0;
}
