#include <stdio.h>
#include <ctype.h>
char firstRepeatingLowercase(char str[]) {
int freq[26] = {0};  
for (int i = 0; str[i] != '\0'; i++) {
if (islower(str[i])) {
int index = str[i] - 'a';
freq[index]++
if (freq[index] == 2) {
return str[i];  
}
}
}
return '\0';  
}
int main() {
char str[] = "abCdaB";
char result = firstRepeatingLowercase(str);
if (result != '\0'){
printf("First repeating lowercase: %c\n", result);
}
else{
printf("No repeating lowercase found\n");
}
return 0;
}
