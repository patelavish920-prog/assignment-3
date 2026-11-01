#include <stdio.h>

int main()
{
    int i, n, sum = 0;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= 2*n; i += 2)
    {
        sum = sum + i;
    }

    printf("Sum = %d", sum);

    return 0;
}
