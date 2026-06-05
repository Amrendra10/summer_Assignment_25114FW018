#include<stdio.h>
int main()
{
    int n,i,sum=0,fact,r,temp;
    printf("Enter a number:");
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;

        fact=1;
        
    for(i=1;i<=r;i++)
    {

        fact=fact*i;
    }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==n)
    printf("Strong number");
    else
    printf("Not strong number");
    return 0;

}