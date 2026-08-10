#include<stdio.h>
int main(){
    int p,r,t,si;
    printf("enter the principal amount: ");
    scanf("%d",&p);
    printf("enter the rate of interest: ");
    scanf("%d",&r);
    printf("enter the time period: ");
    scanf("%d",&t);
    si = (p*r*t)/100;
    printf("the simple interest is: %d",si);
    return 0;
}