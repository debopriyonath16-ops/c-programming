#include <stdio.h>
int sum(int);
int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    if(n > 0){
        printf("sum of %d natural numbers is %d.", n,sum(n));}
    else{
        printf("%d is not a natural number",n);}
    return 0;
}

int sum(int n)
{
    int i, sum = 0;
    for(i = 1; i <= n; i++){
        sum = sum + i;
    }
    return sum;
}