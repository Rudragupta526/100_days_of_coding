#include <stdio.h>
#include <ctype.h>
#include <string.h>
void printInitialsWithSurname(char str[]) {
int i = 0;
char surname[50];
int len = strlen(str);
if (str[0] != ' '){
printf("%c", toupper(str[0]));
while (str[i] != '\0') {
if (str[i] == ' ' && str[i+1] != '\0') {
int j = i + 1;
int spaceCount = 0;
}
for (int k = j; k < len; k++) {
if (str[k] == ' '){
spaceCount++;
}
}
if (spaceCount == 0) {
strcpy(surname, &str[j]);
break;
} else {
printf("%c", toupper(str[i+1]));
}
}
i++;
}
printf(" %s\n", surname);
}
int main() {
char name[] = "Rudra Pratap Singh";
printInitialsWithSurname(name);  
return 0;
}
