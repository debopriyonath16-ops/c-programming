#include<stdio.h>
int main(){
    int a,b;
    printf("enter the number: ");
    scanf("%d",&a);
    b = a /10;
    b = b * 10;
    printf("the last digit of %d is: %d",a,a-b);
    return 0;
}