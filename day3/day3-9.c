#include <stdio.h>
int main() {
    int total_sec, hours, minute, second;
    printf("Enter total time in seconds: ");
    scanf("%d",&total_sec);
    hours = total_sec/3600;
    int remaining= total_sec%3600;
    minute = remaining/60;
    second = remaining%60;
    printf("Time is: %d hours,%d Minutes,and %d seconds", hours, minute, second);
    return 0;
}