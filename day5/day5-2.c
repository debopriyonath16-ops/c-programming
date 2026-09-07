#include<stdio.h>
int main(){
	int i,a=0,b=1;
	printf("enter number:");
	scanf("%d",&a);
	for (i=1;a>0;a--){
		b=a*b;
	}
	printf("Factorial is %d",b);
	return 0;
}