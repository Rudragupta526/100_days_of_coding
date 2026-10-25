#include<stdio.h>
int main(){
int a ;
int b;
int c;
printf("enter number a:");
scanf("%d",&a);
printf("enter number b:");
scanf("%d",&b);
c = a;
a = b;
b = c;
printf("value of a:%d", a);
printf("value of b:%d", b);
reurn 0;
}