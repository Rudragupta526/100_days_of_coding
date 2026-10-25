#include<stdio.h>
int main(){
int n;
int i;
int i2;
printf("enter number of rows:");
scanf("%d",&n);
for(i = 1; i <= n; i++){
for(i2 = 1; i2 <= i; i2++){
printf("%d",i2);
}
printf("\n");
}
return 0;
}