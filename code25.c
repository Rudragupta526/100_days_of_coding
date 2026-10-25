#include<stdio.h>
int main(){
int n;
int i;
int pro = 1;
printf("enter number n:");
scanf("%d",&n);
for(i=1;i<=n;i++){
pro = pro*i;
}
printf("%d",pro);
return 0;
}