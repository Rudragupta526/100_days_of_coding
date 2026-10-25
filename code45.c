#include<stdio.h>
int main(){
int n;
int i;
int i2;
int i3;
int i4;
printf("enter number n:");
scanf("%d",&n);
for(i = 1;i <= n; i++){
for(i2 = 1; i2 <= 2*i - 1; i2++){
printf("*\n");
}
printf("\n");
}
return 0;
}