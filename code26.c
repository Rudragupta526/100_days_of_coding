#include<stdio.h>
int main(){
int n ;
int i ;
int rev = 0;
printf("enter a number :");
scanf("%d",&n);
while(n!=0){
i = n%10;
rev = rev*10 + i;
n = n/10;
}
printf("%d",rev);
return 0;
}



