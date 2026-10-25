#include<stdio.h>
#include<math.h>
int main(){
int a;
int b;
int c;
int d;
float r1;
float r2;
printf("enter number a:");
scanf("%d",&a);
printf("enter number b:");
scanf("%d",&b);
printf("enter a number c:");
scanf("%d",&c);
d = b*b - 4*a*c;
r1 = (float) (-b + sqrt(d))/2*a;
r2 = (float) (-b - sqrt(d))/2*a;
if(d>0){
printf("roots of the equation are real and distinct");
printf("roots of the equation is : %f", r1);
printf("roots of the equation is : %f", r2);
}
else if(d=0){
printf("roots of the equation are real and distinct");
printf("roots of the equation is : %f", r1);
printf("roots of the equation is : %f" , r2);
}
else{
printf("roots of the equation are imaginary");
}
return 0;
}