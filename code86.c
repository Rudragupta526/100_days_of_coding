#include <stdio.h>
#include <string.h>
#include <ctype.h>
int isPalindrome(char str[]) {
int i = 0, j = strlen(str) - 1;
while (i < j) {

if (tolower(str[i]) != tolower(str[j])) {
return 0; 
}
i++;
j--;
}
return 1; 
}
int main() {
char str[] = "Madam";
if (isPalindrome(str))
printf("Palindrome\n");
else
printf("Not a palindrome\n");
return 0;
}
