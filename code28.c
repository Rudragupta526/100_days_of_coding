#include<stdio.h>
include<math.h>
int main(){
int n;
int c=0;
int i;
printf("enter a number :");
scanf("%d",&n);
int m = n;
int sum =0;
int p = m;
while(n!=0){
c++;
n = n/10;
}
int sum =0;
while(m!=0){
i = n%10;
sum = sum + pow(rem,c);
m = m/10;
}
if (sum == p){
printf("the number is armstrong");
}
else{
printf("the number is not armstrong");
}
return 0;
}


