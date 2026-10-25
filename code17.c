#include<stdio.h>
int main (){
int cp;
int sp;
int profit;
int loss;
printf("enter cost price:");
scanf("%d",&cp);
printf("enter selling price:");
scanf("%d",&sp);
if( sp > cp){
profit = sp - cp;
printf("the profit percent : %f", ((float) profit / cp ) * 100);
}
else if(sp==cp){
printf("there is no profit and loss hence profit and loss percentage is 0");
}
else{
loss = cp - sp;
printf("the loss percent : %f", ((float) loss / cp ) * 100);
}
return 0;
}

