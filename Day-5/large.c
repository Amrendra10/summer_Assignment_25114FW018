#include <stdio.h>
int main()
{
    int n, i,largest=1;
    printf("Enter a number:");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            largest=i;
            while(n%i==0)
            n=n/i;
        }

    }
    printf("Largest prime factor = %d",largest);
    
    return 0;
}