#include<stdio.h>
int main(){
int n;
printf("enter number of elements n:");
scanf("%d",&n);
int arr1[n];
int i;
int j;
int k;
printf("enter number k:");
scanf("%d",&k);
int arr2[n -1];
for(i = 0 ; i < n; i++){
for(j =0; j < n-1; j++){
if(arr1[i] = k){
arr2[j] = arr1[i+1];
}
else{
arr2[j] = arr1[i];
}
}
}
for(j = 0;j < n-1; j++){
printf("%d",arr2[j]);
}
return 0;
}