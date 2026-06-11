#include<stdio.h>
int factorial (int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    
    return fact;
}
int main()
    {
        int n,fact;
        printf("Enter a number:");
        scanf("%d",&n);
        fact=factorial(n);

        printf("factorial of given number=%d",fact);
        return 0;
    }
