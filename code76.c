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
int arr1[n1][n2];
int arr2[n1][n2];
if(n1 == n2){
for(i = 0;i < n;i++){
for(j = 0;j < n;j++){
scanf("%d",&arr1[n1][n2]);
}
}
for(i = 0;i < n;i++){
for(j = 0;j < n;j++){
t = arr1[i][j];
arr1[i][j] = arr1[j][i];
arr1[j][i] = t;
}
}
for(i = 0;i < n;i++){
for(j = 0;j < n;j++){
arr2[i][j] = arr1[i][j];
}
}
for(i = 0;i < n;i++){
for(j = 0;j < n;j++){
if(arr1[i][j] != arr2[i][j]){
printf("the matrix is not symmetric ");
break;
}
}
}
printf("the matrix is symmetric");
return 0;
}