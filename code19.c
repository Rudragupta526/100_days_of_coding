#include<stdio.h>
int main(){
int n;
int bill = 0;
int i;
printf("enter number of units:");
scanf("%d",&n);
if (n<=100){
for(i=1;i<=n;i++){
bill = bill + 5;
}
printf("%d",bill);
}
else if (n>100 && n<=200){
for(i=1;i<=n-100;i++){
bill = bill + 7;
} 
printf("%d",bill + 500);
}
else if (n>200 && n<=300){
for (i=1; i<=n-200; i++){
bill = bill + 10;
}
printf("%d",bill + 1200);
}
else{
for(i=1; i<=n-300; i++){
bill = bill + 12;
}
printf("%d",bill + 2200);
}
return 0;
}