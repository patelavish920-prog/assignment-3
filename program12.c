#include <stdio.h>

int main()
{
    int i, n;
    char name[50];

    printf("Enter your name: ");
    scanf("%49s", name);

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("%s\n", name);
    }

    return 0;
}
