#include <stdio.h>
int main() {
    int n, first, second, third, sum;
    printf("Enter a 3 digit number: ");
    scanf("%d", &n);
    first = n / 100;
    second = (n / 10) % 10;
    third = n % 10;
    sum = first + second + third;
    printf("Sum of digits: %d", sum);
    return 0;
}