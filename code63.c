#include<stdio.h>
int main(){
int n;
int m;
printf("enter number m:");
scanf("%d",&m);
printf("enter number n:");
scanf("%d",&n);
int arr1[m];
int arr2[n];
for(i = 0;i < m;i++){
	scanf("%d",&arr1[i]);
}
for(j = 0;j < n;j++){
	scanf("%d",&arr2[j]);
}
int i = 0;
int j = 0;
int k = 0;
int arr3[m+n];

while(i < m && j < n){
if(arr1[i] < arr2[j]){
arr3[k] = arr1[i];
i++;
k++;
}
else(arr2[j] < arr1[i]){
arr3[k] = arr2[j];
j++;
k++;
}
}
return 0;
}
while(i <4){
	arr3[k] = arr1[i];
	i++;
}
return 0;
}
