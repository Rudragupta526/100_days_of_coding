#include<stdio.h>
int main(){
int n1;
int n2;
int i1;
int i2;
int hcf;
printf("enter number n1:");
scanf("%d",&n1);
printf("enter number n2:");
scanf("%d",&n2);
for(i1 = 1;i1 <= n1 && i1 <= n2;i1++){

if(n1%i1 == 0 && n2%i1 == 0){
hcf=i1;

}

}
printf("the highest common factor :%d", hcf);

return 0;
}