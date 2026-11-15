#include <stdio.h>
int main()
{
    int i, n = 10;
    int a[n];
    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    int max = a[0];
    int min = a[0];
    for(i = 1; i < n; i++)
    {
        if(a[i] > max)
            max = a[i];
        if(a[i] < min)
            min = a[i];
    }
    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    return 0;
}