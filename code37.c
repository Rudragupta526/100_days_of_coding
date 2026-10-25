#include<stdio.h>
int main(){
int n;
int i;
int n2;
int n1;
float sum = 0;
float term;
printf("enter number of terms:");
scanf("%d",&n);
for(i=1; i<=n; i++){
n1 = 2*i + 1;
n2 = 2*i + 2;
term = (float)n1/n2;
sum = sum + term;
}
printf("the sum of the series:%f", (float)sum + 1);
return 0;
}