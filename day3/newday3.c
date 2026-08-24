#include<stdio.h>
int main(){
	int roll1,roll2;
	float m1,m2,p1,p2,c1,c2,b1,b2,e1,e2;
	scanf("%d",&roll1);
	scanf("%f%f%f%f%f",&m1,&p1,&c1,&b1,&e1);
	float a1=(m1+p1+c1+b1+e1)/5.0;
	printf("percentage=%f\n",a1);
	scanf("%d",&roll2);
	scanf("%f%f%f%f%f",&m2,&p2,&c2,&b2,&e2);
	float a2=(m2+p2+c2+b2+e2)/5.0;
	printf("percentage=%f\n",a2);
	a1>a2?printf("max marks%=%f",a1):printf("max marks%=%f",a2);
	a1>a2?printf("max roll=%d",roll1):printf("max roll=%d",roll2);
	return 0;
}