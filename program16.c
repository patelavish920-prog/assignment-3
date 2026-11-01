#include <stdio.h>

int main()
{
    int i, n, largest, smallest;

    printf("Enter number 1: ");
    scanf("%d", &n);

    largest = smallest = n;

    for(i = 2; i <= 100; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &n);

        if(n > largest)
            largest = n;

        if(n < smallest)
            smallest = n;
    }

    printf("Largest = %d\n", largest);
    printf("Smallest = %d", smallest);

    return 0;
}
