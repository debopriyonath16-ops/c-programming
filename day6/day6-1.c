#include<stdio.h>
void main(){
	int count=0,num,og_num;
	printf("enter number: ");
	scanf("%d",&num);
	og_num=num;
	if (num==0)
	printf("number of digits is 1");
	else{
		while(num!=0){
		num=num/10;
		count++;
	}
			printf("number of digits in %d is %d",og_num,count);
	}
}