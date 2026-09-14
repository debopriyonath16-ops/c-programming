#include<stdio.h>
void main(){
	int sum=0,ld=0,num,temp;
	printf("enter number: ");
	scanf("%d",&num);
	temp=num;
		while(num!=0){
			ld=num%10;
			sum+=ld;
		    num /=10;
	}
			printf("sum of digits is %d",sum);
}