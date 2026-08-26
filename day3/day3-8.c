#include <stdio.h>
int main() {
    int total_days, years, months, days;
    printf("Enter total age in days: ");
    scanf("%d",&total_days);
    years = total_days/365;
    int remaining= total_days % 365;
    months = remaining/30;
    days = remaining%30;
    printf("Age is: %d Years,%d Months,and %d Days", years, months, days);
    return 0;
}