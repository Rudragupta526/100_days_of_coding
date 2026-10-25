#include<stdio.h>
int main(){
int i;
int j;
int n1;
int n2;
int sum[n1];
int s = 0;
printf("enter number n1:");
scanf("%d",&n1);
printf("enter number n2:");
scanf("%d",&n2);
for(i = 0;i < n1;i++){
for(j = 0;j < n2;j++){
s = s+arr[i][j];
}
sum[i] = s;
}
for(i = 0;i < n;i++){
printf("%d",sum[i]);
}
return 0;
}