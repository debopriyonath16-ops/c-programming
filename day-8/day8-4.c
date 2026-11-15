#include <stdio.h>
#include <math.h>
void area(float a,float b,float c);
void type(float a,float b,float c);
int main()
{
    float a, b, c;
    printf("Enter 3 sides of the triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    if(a <= 0 || b <= 0 || c <= 0)
        printf("Negative numbers or 0 cant be used");
    else if((a+b<=c) || (a+c<=b) || (b+c<=a)){
        printf("triangle not possible");
    }
    else
    {
        type(a, b, c);
        area(a, b, c);
    }
    return 0;
}
void area(float a,float b,float c)
{
    float area = 0.0, s=0.0;
    s = (a + b + c)/2.0;
    area = sqrt(s * (s - a) * (s - b) * (s - c));
    printf("The area of the triangle is %f\n", area);
}
void type( float a,float b,float c)
{
    if(a == b && b == c)
        printf("Equilateral triangle\n");
    else if(a == b || b == c || c == a)
        printf("Isosceles triangle\n");
    else
        printf("Scalene triangle\n");
}