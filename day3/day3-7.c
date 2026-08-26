#include <stdio.h>
int main() {
    int lp,a;
    printf("Enter year: ");
    scanf("%d",&lp);
    a =lp%400==0? 1 :((lp%100==0)?0:((lp%4==0)?1:0));
    a?printf("The year %d is a leap year",lp):printf("The year %d is not a leap year",lp);
    return 0;
}