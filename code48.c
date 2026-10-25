#include<stdio.h>
int main(){
int i;
int j;
int k;
int n;
printf("enter number n :");
scanf("%d",&n);
for(i = 1;i <= n; i++){
if(i>1){
for(j=1;j <= i-1; j++){
printf(" ");
}
}
for(k = n;k >= i;k--){
printf("*");
}
printf("\n");
}
return 0;
}

