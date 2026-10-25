#include<stdio.h>
int main(){
int a;
printf("enter a number:");
scanf("%d",&a);
for(int f=a;f>0;f--){
int g=0;
for(int g=f;g<=a;g++){
printf("%d",g);
}
return 0;
}