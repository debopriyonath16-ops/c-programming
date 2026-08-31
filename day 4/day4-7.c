#include<stdio.h>
int main(){
    int td,y,m,d;
    printf("Enter total days: ");
    scanf("%d", &td);
    if (td < 0){
        printf("Invalid input.");
    }
    else{
        y = td / 365;
        td = td - (y * 365);
        m = td / 30;
        d = td - (m * 30);
        printf("It's %d years, %d months, and %d days",y,m,d);
    }
    return 0;
}