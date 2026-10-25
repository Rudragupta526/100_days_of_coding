#include <stdio.h>
#include <ctype.h>
void printInitials(char str[]) {
int i = 0;
if (str[0] != ' ') {
printf("%c", toupper(str[0]));  
}
while (str[i] != '\0') {
if (str[i] == ' ' && str[i+1] != '\0') {
printf("%c", toupper(str[i+1]));  
}
i++;
}
printf("\n");
}
int main() {
char name[] = "Rudra gupta";
printInitials(name);  
return 0;
}
