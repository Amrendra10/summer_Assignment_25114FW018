#include<stdio.h>
int perfect(int n)
{
    int sum=0,i;
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int n,sum;
    printf("Enter a number:");
    scanf("%d",&n);

    sum=perfect(n);

    if(sum==n)
    printf("Perfect number");
    else
    printf("Not perfect number");
    return 0;
}