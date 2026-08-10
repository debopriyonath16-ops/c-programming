#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter the 1st number: ");
    scanf("%d",&a);
    printf("enter the 2nd number: ");
    scanf("%d",&b);
    c = a + b;
    printf("the sum of %d and %d is: %d",a,b,c);
    return 0;
}