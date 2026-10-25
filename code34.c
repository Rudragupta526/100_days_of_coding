#include<stdio.h>
#include<math .h>
int main(){
int num, firstdigit, lastdigit, digits, swappednum;
printf("enter a number n":);
scanf("%d",&num);
digits = (int)log10(num)+1;
firstdigit = num / (int)pow(10,digits - 1);
lastdigit = num%10;
int middlepart = num%(int)pow(10, digits-1);
middlepart = middlepart/10;
swappednum = lastdigit * (int)pow(10, digits-1) + middlepart*10 + firstdigit;
printf("number after swapping first and laast digit of number is :%d", swappednum);
return 0;
}