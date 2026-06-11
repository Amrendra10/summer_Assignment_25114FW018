#include<stdio.h>
int prime (int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int main()
{
    if (prime(7))
    printf("Pime number");
    else
    printf("Not prime");
    return 0;
}