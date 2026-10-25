#include<stdio.h>
int main(){
int n;
int fine = 0;
int i;
printf("enter number of days late:");
scanf("%d",&n);
if(n>=1 && n<=5){
for(i=1;i<=n;i++){
fine = fine + 2;
}
printf("%d",fine);
}
else if (n>5 && n<=10){
for (i=1;i<= n-5 ; i++){
fine = fine + 4;
}
printf("%d",fine + 10);
}
else if (n>10 && n<=30){
for (i=1 ; i<= n-10 ; i++){
fine = fine + 6;
}
printf("%d",fine + 30);
}
else{
printf("membership cancelled");
}
return 0;
}