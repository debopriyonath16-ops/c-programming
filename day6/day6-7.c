#include<stdio.h>
int main(){
	int i=1,n,facto=1;
	printf("enter number:");
	scanf("%d",&n);
	while (i<=n){
		facto*=i;
		i++;
	}
	printf("Factorial is %d",facto);
	return 0;
}