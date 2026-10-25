#include<stdio.h>
int main(){
int i;
int j;
int n1;
int n2;
int sum = 0;
printf("enter number n1:");
scanf("%d",&n1);
printf("enter number n2:");
scanf("%d",&n2);
if(n1 == n2){
for(i = 0;i < n1;i++){
for(j = 0;j < n2;j++){
scanf("%d",&arr[i][j]);
}
}
for(i = 0;i < n1;i++){
sum = sum + arr[i][i];
}
printf("%d",sum);
return 0;
}
return 0;
}