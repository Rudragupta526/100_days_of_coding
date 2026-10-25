#include<stdio.h>
int main(){
int x;
int year;
printf("enter year:");
scanf("%d",&year);
printf("enter the month number:");
scanf("%d",&x);
switch(x)
{
case(1):
printf("the month name is : january");
printf("the number of days in the month is 31");
case(2):
if(year % 4==0 ||year % 400==0){
printf("the month is february");
printf("the number is 29");
}
else if(year %100==0){
printf("the month is february");
printf("the number of days are 28");
else{
	printf("the month is february");
	printf("the number is days 28");
}
break;
case(3):
printf("the month is march");
printf("the number of days are 31");
break;
case(4):
printf("the month is april");
printf("the number is days 30");
break;
case(5):
printf("the month is may");
printf("the number of days is 31");
break;
case(6):
printf("the month is june");
printf("the number of days is 30");
break;
case(7):
printf("the month is july");
printf("the number of days is 31");
break;
case(8):
printf("the month is august");
printf("the number of days is 31");
break;
case(9):
printf("the month is september");
printf("the number of days are 30");
break;
case(10):
printf("the month is october");
printf("the number of days are 31");
break;
case(11):
printf("the month is november");
printf("the number of days is 30");
break;
case(12):
printf("the month is december");
printf("the number of days is 31");
break;
}
return 0;
}
