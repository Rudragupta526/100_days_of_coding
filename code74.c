#include<stdio.h>
int main(){
int i;
int j;
int n1;
int n2;
int t;
printf("enter number n1:");
scanf("%d",&n1);
printf("enter number n2:");
scanf("%d",&n2);
int arr[][];
for(i = 0;i < n1;i ++){
for(j = 0;j < n2;j++){
scanf("%d",&arr[i][j]);
}
for(i = 0;i < n1;i ++){
for(j = 0;j < n2;j++){
t = arr[i][j];
arr[i][j] = arr[j][i];
arr[j][i] = t;
}
}
for(i = 0;i < n2;i++){
for(j = 0;j < n1;j++){
printf("%d",arr[i][j];
}
}
return 0;
}