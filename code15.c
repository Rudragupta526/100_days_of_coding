#include<stdio.h>
int main(){
int n;
printf("enter percentage n:");
scanf("%d",&n);
if(n>=60 && n<=69){
printf("grade D");
}
else if (n>=70 && n<=79){
printf("grade C");
}
else if (n>=80 && n<=89){
printf("grade B");
}
else if (n>=90 && n<=100){
printf("grade A");
}
else{
printf("grade F");
}
return 0;
}

