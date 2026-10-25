#include<stdio.h>
int main(){
int n;
int arr[n] ;
int i;
int j;
int m;
int s;
printf("enter number n:");
scanf("%d",&n);
for(i = 0;i < n-1; i++){
scanf("%d",&arr[i]);
}
int k;
printf("enter number k:");
scanf("%d",&k);
printf("enter the position at which we need to insert k:");
scanf("%d",&j);
if(j == n-1){
arr[n-1] = j;
}
if(j>=0 && j<n-1){
for(m = 0;m < n;m++){
if(m == j){
	for(s = n-1;s >= m;s--){
		arr[s + 1] = arr[s];
	}
		arr[m] = k;
}
}
}
for(i = 0;i < n; i++){
printf("%d",arr[i]);
}
return 0;
}