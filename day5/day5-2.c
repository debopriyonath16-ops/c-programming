#include<stdio.h>
int main(){
	int i,n,facto=1;
	printf("enter number:");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		facto=facto*i;
	}
	printf("Factorial is %d",facto);
	return 0;
}
