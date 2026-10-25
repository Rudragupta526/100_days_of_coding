#include<stdio.h>
int main(){
int n;
int i;
int rev = 0;
printf("enter a number n:");
scanf("%d",&n);
int m=n;

while(n!=0){
i = n%10;
rev = rev*10 +i;
n = n/10;
}
if(rev == m){
printf("n is a palindraome");
}
else{
printf("the number n is not palindrome");
}
return 0;
}