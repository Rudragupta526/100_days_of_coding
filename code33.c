#include<stdio.h>
int main(){
int n;
int pro 1;
printf("enter number n:");
scanf("%d",&n);
while(n!=0){
	rem=n%10;
	if((rem%2!=0)
		prod=prod*rem;
	n=n/10;
}
printf("the product of odd digits of a number n is :%d", pro);
return 0;
}