#include<stdio.h>
int main(){
	int i,a=1,x;
	printf("enter number:");
	scanf("%d",&x);
	for (i=2;i<=x-1;i++){
		if (x%i==0)
		a=0;
	}
	if (x==1)
		printf("1 is neither prime nor composite");
	else if (a==1)
		printf("%d is prime",x);
	else if(a==0)
		printf("%d is composite",x);
	return 0;
}