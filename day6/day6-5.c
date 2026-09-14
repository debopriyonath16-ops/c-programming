#include<stdio.h>
void main(){
	int ld=0,num,temp,arm;
	printf("enter 3 digit number: ");
	scanf("%d",&num);
	temp=num;
		while(num!=0){
			ld=num%10;
			arm+=ld*ld*ld;
		    num /=10;
	}
	if(temp==arm)
		printf("armstrong");
	else
		printf("not armstrong");
}