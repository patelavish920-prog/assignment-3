#include <stdio.h>

int main()
{
    int i, n;
    float num, sum = 0, mean;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("Enter value: ");
        scanf("%f", &num);

        sum = sum + num;
    }

    mean = sum / n;

    printf("Sum = %.2f\n", sum);
    printf("Mean = %.2f", mean);

    return 0;
}
