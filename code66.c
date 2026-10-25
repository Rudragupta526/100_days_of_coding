#include<stdio.h>
int main(){
int n;
printf("enter number n:");
scanf("%d",&n);
int arr[n];
int i;
int j;
int temp;
int l;
int m;
int o;
int p;
for(i = 0;i < n - 1;i++){
	scanf("%d",&arr[i]);
}
for(i = 0;i < n - 1;i++){
for(j = i+1;j < n - 1;j++){
if(arr[i]>arr[j]){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
}
}
}
int k;
printf("enter number k:");
scanf("%d",&k);
if(k<arr[0]){
	for(p = n - 1;p >= 0; p--){
	arr[p+1] = arr[p];
	}
arr[0] = k;
}
for(o = 0;o < n-1;o++){
if(k > arr[o] && k < arr[o+1]){
	for(l = n-1;l >= o+1;l--){
		
		arr[l+1] = arr[l];
	}
		arr[o+1] = k;
}
}
for(m = 0;m < n;m++){
printf("%d",arr[m]);
}
return 0;
}