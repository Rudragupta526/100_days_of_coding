#include<stdio.h>
int main(){
int n ;
int i;
int flag=0;
printf("enter a number n");
scanf("%d",&n);
for(i=1;i<=n;i++){
if (n%i==0 && n%1==0 && i == n){
flag=1;

}
}
if(flag==1)
	printf("prime");
else 
	printf("not prime");


return 0;
}