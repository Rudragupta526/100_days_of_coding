#include<stdio.h>
int main(){
	//taking all the digits of the integer number as elemnts in array//
	int arr[] = {1,2,3,4,4,6};
	int i;
	int flag1 = 0;
	int flag2 = 0;
	int flag3 = 0;
	int flag4 = 0;
	int flag6 = 0
	for(i = 0;i < 6; i++){
		if(arr[i] = 1){
		flag1 = flag1 + 1;
		}
		else if(arr[i] = 2){
		flag2 = flag2 + 1;
		}
		else if(arr[i] = 3){
		flag3 = flag3 + 1;
		}
		else if(arr[i] = 4){
		flag4 = flag4 + 1;
		}
		else if(arr[i] = 6){
			flag6 = flag6 + 1;
		}
	}
	if(flag6 > flag2;flag6 > flag3;flag6 > flag4){
		printf("the digit occurred highest number of time:%d", arr[5]);
	}
	else if(flag4 > flag6;flag4 > flag3;flag4 > flag2;flag4 > flag1){
		printf("the diit occured highest number of time:%d", arr[3]);
	}
	else if(flag3 > flag6;flag3 > flag4;flag3 > flag2;flag3 > flag1){
		printf("the digit occurred highest number of time:%d", arr[2]);
	}
	else if(flag2 > flag6;flag2 > flag3;flag2 > flag1;flag2 > flag4){
		printf("the digit occurred highest number of time:%d" , arr[1]);
		}
	else if(flag1 > flag2;flag1 > flag3;flag1 > flag4;flag1 > flag6){
		printf("the digit occurred highest number of time:%d" , arr[0]);
	}
	return 0;
}