#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 2; i <= 2*n; i += 2)
    {
        printf("%d\n", i);
    }

    return 0;
}
