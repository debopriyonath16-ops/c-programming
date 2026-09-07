#include<stdio.h>
int main(){
	int i,n,og_n;
	printf("enter number:");
	scanf("%d",&n);
	og_n=n;
	if (n==0)
		printf("number of digits in 0 is 1");
		else{
	for (i=0;n>0;i++){
		n=n/10;
	}
		printf("number of digits in %d is %d",og_n,i);
}
	return 0;
}