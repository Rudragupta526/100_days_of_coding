#include<stdio.h>
int main(){
float x;
float y;
float z;
printf("enter x :");
scanf("%f",&x);
printf("enter y:");
scanf("%f",&y);
printf("enter z:");
scanf("%f",&z);
if(x>y && x>z){
if(y>z){
printf("x is greater than y and y is greater than z");
}
else{
printf("x is greater than y and z is greater than y");
}
}
else if(y>z && y>x){
if(z>x){
printf("y is greater than z and z is greater than x");
}
else{
printf("y is greater than x and x is greater than z");
}
}
else{
if (x>y){
printf("z is greater than x and x is greater than y");
}
else{
printf("z is greater than y and y is greater than x");
}
}
return 0;
}
