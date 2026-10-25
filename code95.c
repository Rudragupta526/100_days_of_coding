#include <stdio.h>
#include <string.h>
int isRotation(char str1[], char str2[]) {
if (strlen(str1) != strlen(str2))
return 0;
char temp[200];  // Make sure it's large enough
strcpy(temp, str1);
strcat(temp, str1);
return strstr(temp, str2) != NULL;
}
int main() {
char str1[] = "abcd";
char str2[] = "cdab";
if (isRotation(str1, str2))
printf("Rotation\n");
else
printf("Not Rotation\n");
return 0;
}
