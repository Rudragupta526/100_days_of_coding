#include<stdio.h>
int main(){
int n;
int n1;
int n2;
int i;
float term;
float sum = 0;
printf("enter number of terms:");
scanf("%d",&n);
for(i=1; i<=n; i++){
n1 = 4*i - 1;
n2 = 2*i;
term = (float)n2/n1;
sum = sum + term;
}
printf("the sum of the series is :%f", sum + 1);
return 0;
}