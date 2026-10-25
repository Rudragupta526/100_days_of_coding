#include<stdio.h>
int main(){
int n;
int sum = 0;
printf("enter number n:");
scanf("%d",&n);
for(n/10!=0){
sum = sum + n%10;
n = n/10;
}
printf("sum of the digits of number :%d" , sum);
return 0;
}
