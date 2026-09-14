#include<stdio.h>
int main(){
	int i=1,n,t1=0,t2=1,next;
	printf("number of terms of sequence:");
	scanf("%d",&n);
	while (i<=n){
		printf("\n%d",t1);
		next=t1+t2;
		t1=t2;
		t2=next;
		i++;
	}
	return 0;
}