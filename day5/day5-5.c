#include<stdio.h>
int main(){
	int i,a=0;
	for (i=1;i<=10;i++){
		a=a+i*i;
	}
	printf("sum of squares of 1st 10 natural numbers: %d",a);
	return 0;
}
