#include <stdio.h>
int main()
{
    int start, end, i, j, isPrime;
    printf("Enter starting and ending number:");
    scanf("%d %d", &start, &end);
    printf("Prime numbers are: ");
    for (i = start; i <= end; i++)
    {
        if (i <= 1)
            continue;

        isPrime = 1;

        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime == 1)
            printf("%d\n", i);
    }
    printf("\n");
    return 0;
}
