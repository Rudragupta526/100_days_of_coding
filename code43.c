#include<stdio.h>
int main(){
int n;
int i;
int i2;
int i3;
printf("enter number of rows :");
scanf("%d",&n);
for(i = 1; i <= n; i++){
for(i3 = 1; i3 <= i-1; i3++){
	printf(" ");
}
for(i2 = n; i2 >= i; i2--){
printf("*");
}
printf("\n");
}
return 0;
}