#include<stdio.h>
char main(){
char c;
prinf("enter a charater:");
scanf("%c",&c);
if(c=="a"||c=="e"||c=="i"||c=="O"||c=="U"){
printf("%c is a vowel",c);
}
else{
printf("%c is a consonant",c);
}
return 0;
}