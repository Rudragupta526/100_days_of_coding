#include<stdio.h>
int main (){
int principal_amount ;
int rate_of_interest ;
int time_period ;
printf("enter principal amount:");
scanf("%d",&principal_amount);
printf("enter rate_of_interest:");
scanf("%d",&rate_of_interest);
printf("enter time_period:");
scanf("%d",&time_period);
printf("simple interest of the given data is :%d\n", principal_amount * rate_of_interest/100 * time_period);
return 0;
}

