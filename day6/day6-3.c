#include<stdio.h>
void main(){
	int rev=0,ld=0,num,temp;
	printf("enter number: ");
	scanf("%d",&num);
	temp=num;
		while(num!=0){
			ld=num%10;
			rev=rev*10+ld;
		    num /=10;
	}
		printf("reverse = %d",rev);
}