#include<stdio.h>
int armstrong(int n)
{
    int temp,sum=0,r;
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    return sum;
}
int main()
{
    int n,sum;
    scanf("%d",&n);
    sum=armstrong(n);
    if(n==sum)
    printf("Armstrong number");
    else
    printf("Not armstrong number");
    return 0;
}