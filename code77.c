#include<stdio.h>
int main(){
int i;
int j;
int n1;
int n2;
int arr[n1][n2];
printf("enter a number n1");
scanf("%d",&n1);
printf("enter a number n2:");
scanf("%d",&n2);
for(i = 0;i < n1;i++){
for(j = 0;j < n2; j++){
scanf("%d",&arr[i][j]);
}
}
for(i = 0;i < n1-1;i++){
for(j = 0;j < n2-1; j++){
if(i ==j){
arr[i][j] = arr[i+1][j+1];
printf("the diagnal elements are not distinct");
}
}
}
printf("the diagnols are distinct");
return 0;
}