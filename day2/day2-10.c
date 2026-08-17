#include <stdio.h>
#include <math.h>
int main(){
    float a, b, c, d, r1, r2;
    printf("Enter a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);
    d = (b * b) - (4 * a * c);//determinant
    r1 = (-b + sqrt(d)) / (2 * a);
    r2 = (-b - sqrt(d)) / (2 * a);
    printf("Root 1: %f", r1);
    printf("\nRoot 2: %f", r2);
    return 0;
}