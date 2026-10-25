#include <stdio.h>
#include <ctype.h>
int main() {
char text[] = "Hello Rudra!";
int vowels = 0, consonants = 0;
int i = 0;
while (text[i] != '\0') {
char ch = text[i];
if (isalpha(ch)){
ch = tolower(ch);
if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
vowels++;
}
else{
	consonants++;
	}
     i++;
    }
}

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
