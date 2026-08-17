#include<stdio.h>
#include<math.h>
int main(){
    float a;
    int fl,cl;
    printf("Enter a decimal number: ");
    scanf("%f", &a);
    fl = floor(a);
    cl = ceil(a);
    printf("floor value: %d",fl);
    printf("\ncieling value: %d",cl);
    return 0;
}