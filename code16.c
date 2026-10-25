#include<stdio.h>
int main(){
int a;
int b;
int c;
printf("enter side a:");
scanf("%d",&a);
printf("enter side b:");
scanf("%d",&b);
printf("enter side c:");
scanf("%d",&c);
if(a!=b && b!=c && c!=a){
printf("the triangle is scalene");
}
else if (a!=b && b==c ){
printf("the triangle is isoceles");
}
else if (a==b && b!=c){
printf("the triangle is isosceles");
}
else if (a==c && c!=b){
printf(" the triangle is isosceles");
}
else{
printf("the triangle is equilateral");
}
return 0;
}