#include<stdio.h>
int main(){
	int r,s,l,b,h;
	printf("enter radius of circle: ");
	scanf("%d",&r);
	printf("\narea of circle: %f",3.14*r*r);
	printf("\nenter side of square: ");
	scanf("%d",&s);
	printf("\narea of square: %d",s*s);
	printf("\nenter lenght and breadth of rectangle: ");
	scanf("%d%d",&l,&b);
	printf("\narea of rectangle: %d",l*b);
	printf("\nenter height and base of triangle: ");
	scanf("%d%d",&h,&b);
	printf("\narea of triangle: %f",0.5*b*h);
	return 0;
}
