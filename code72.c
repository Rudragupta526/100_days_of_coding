#include<stdio.h>
int main(){
int i;
int j;
int n1;
int n2;
int sum = 0;
int arr[n1][n2];
printf("enter number n1:");
scanf("%d",&n1);
printf("enter number n2:");
scanf("%d",&n2);
for(i = 0; i < n1; i++){
for(j = 0; j < n2; j++){
scanf("%d",&arr[i][j];
}
}
for(i = 0; i < n1; i++){
for(j = 0; j < n2; j++){
sum = sum + arr[i][j];
}
}
printf("%d",sum);
return 0;
}