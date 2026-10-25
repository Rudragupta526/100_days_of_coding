#include<stdio.h>
int main(){
int pro = 1;
int n;
int i;
printf("enter a number n:");
scanf("%d",&n);
for(i=1; i<=n; i++){
if (i%2==0){
pro = pro*i;
}
}
printf("%d",pro);
return 0;
}