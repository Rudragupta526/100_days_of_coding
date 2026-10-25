#include<stdio.h>
int main(){
int n1;
int n2;
int i;
int hcf;
printf("enter number n1:");
scanf("%d",&n1);
printf("enter number n2:");
scanf("%d",&n2);
for(i=1;i<=n1 && i<=n2;i++){
if(n1%i==0 && n2%i==0){
hcf = n1;
}
}
printf("the lcm of two number n1 and n2 is :%d", n1 * n2 / hcf);
reurn 0;
}
