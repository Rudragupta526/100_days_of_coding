#include<stdio.h>
int main(){
int a;
printf("enter your number of rows:");
scanf("%d",&a);
for(int j=a;j>0;j--){
printf(" ");
for(int d=j;d<=a;d++){
printf("%d",d);
}
printf("\n");
}
reurn 0;
}