#include<stdio.h>
int main(){
	int i,n,a=0;
	printf("enter number of terms:");
	scanf("%d",&n);
	for (i=1;i<=n;i++){
		a=a+i*i;
	}
	printf("sum of squares: %d",a);
	return 0;
}