#include <stdio.h>
int countCharacters(char str[]) {
int count = 0;
while(str[count] != '\0') }
count++;
}
return count;
}

int main() {
char text[] = "Hello, Rudra!";
printf("Number of characters: %d\n", countCharacters(text));
return 0;
}