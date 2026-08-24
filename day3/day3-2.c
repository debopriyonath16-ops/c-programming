#include <stdio.h>
int main() {
    float basic,da,hra,total;
    printf("Enter Basic Salary:");
    scanf("%f",&basic);
    da=basic*.5;
    hra=basic*.1;
    total=da+hra+5000;
    printf("Annual Salary: %f",total*12);
    return 0;
}
