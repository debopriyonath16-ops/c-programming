#include <stdio.h>
int main() {
    int r,s,l,b,h;
    printf("Enter radius of circle: ");
    scanf("%d",&r);
    printf("\nCircle Area = %f",3.14*r*r);
    printf("\nEnter side of square: ");
    scanf("%d",&s);
    printf("\nSquare Area = %d",s*s);
    printf("\nEnter length and breadth of rectangle: ");
    scanf("%d%d",&l,&b);
    printf("\nRectangle Area = %d",l*b);
    printf("\nEnter base and height of triangle: ");
    scanf("%d%d",&b,&h);
    printf("\nTriangle Area = %f",0.5*b*h);
    return 0;
}