#include<stdio.h>
void main(){
	int a,b;
	char op;
	printf("enter expression:");
	scanf("%d%c%d",&a,&op,&b);
	switch(op){
		case '+':
			printf("%d",a+b);
			break;
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
		default:
			printf("invalid");
			break;
	}
}