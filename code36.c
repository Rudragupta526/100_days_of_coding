#include<stdio.h>
int main(){
int n;
int i ;
int u;
int sum_of_fact = 0;
int fact = 1;
printf("enter number n:");
scanf("%d",&n);
int m = n;
while(n!=0){
u = n%10;
for(i=1; i<=u; i++){
fact = fact*i;
sum_of_fact = sum_of_fact + fact;
}
fact = 1;
n = n/10;
}
if(sum_of_fact == m){
printf("the number is strong ");
}
else{
printf("the number is not strong");
}
return 0;
}