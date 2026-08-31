#include <stdio.h>
int main(){
    float income,tax = 0;
    printf("Enter annual income: ");
    scanf("%f",&income);
    if (income <= 250000) {
        tax = 0;
    }
    else if (income <= 500000) {
        tax = (income - 250000) * 0.05;
    }
    else if (income <= 1000000) {
        tax = 12500 + (income - 500000) * 0.20;
    }
    else {
        tax = 112500 + (income - 1000000) * 0.30;
    }
    printf("Total Tax: %f\n",tax);
    return 0;
}