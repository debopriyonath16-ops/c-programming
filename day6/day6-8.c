#include<stdio.h>
void main(){
	int ld=0,num,temp,arm=0,count=0;
	printf("enter number: ");
	scanf("%d",&num);
	temp=num;
	while(num!=0){
		num=num/10;
		count++;
	}
	num=temp;
	while(num!=0){
		ld=num%10;
		int i=1,power=1;
		while(i<=count){
			power*=ld;
			i++;
		}
		arm+=power;
		num=num/10;
	}
	if(temp==arm)
		printf("armstrong");
	else
		printf("not armstrong");
}
