#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("After swapping, first number: %d", a);
    printf("\nAfter swapping, second number: %d", b);
    return 0;
}