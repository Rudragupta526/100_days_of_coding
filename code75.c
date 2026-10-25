#include<stdio.h>
int main(){
int i;
int j;
int k;
int l;
int n1;
int n2;
int arr1[n1][n2];
int arr2[n1][n2];
int arr3[n1][n2];
printf("enter number n1:");
scanf("%d",&n1);
printf("enter number n2:");
scanf("%d",&n2);
for(i = 0;i < n1;i++){
for(j = 0;j < n2;j++){
scanf("%d",&arr1[n1][n2]);
}
}
for(i = 0;i < n1;i++){
for(j = 0;j < n2;j++){
scanf("%d",&arr2[n1][n2]);
}
}
for(i = 0;i < n1;i++){
for(j = 0;j < n2;j++){
arr3[i][j] = arr1[i][j] + arr2[i][j];
}
}
for(k = 0;k < n1;k++){
for(l = 0;l < n2;l++){
printf("%d",&arr3[k][l];
}
}
return 0;
}