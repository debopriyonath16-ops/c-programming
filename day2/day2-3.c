#include <stdio.h>
int main() {
    float f, c;
    printf("Enter Celsius: ");
    scanf("%f",&c);
    f = (c * (9 / 5)) + 32;
    printf("Fahrenheit: %f", f);
    printf("\nEnter Fahrenheit: ");
    scanf("%f",&f);
    c = (f - 32) * 5 / 9;
    printf("Celsius: %f", c);
    return 0;
}
