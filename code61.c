#include<stdio.h>
int main(){
int arr[]= {1,2,3,4,5};
int i;
int n ;
printf("enter number n:");
scanf("%d",&n);
for(i = 0;i < 5;i++){
if(arr[i] == n){
printf("number detected at index :%d", i);
}
return 0;
}