#include<stdio.h>
int main(){
    int ts,h,m,s;
    printf("Enter total seconds: ");
    scanf("%d", &ts);
    if (ts < 0){
        printf("Invalid input.");
    }
    else{
        h = ts / 3600;
        ts = ts - (h * 3600);
        m = ts / 60;
        s = ts - (m * 60);
        printf("Time: %d hours, %d minutes, and %d seconds",h,m,s);
    }
    return 0;
}