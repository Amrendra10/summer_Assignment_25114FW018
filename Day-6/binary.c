#include<stdio.h>
int main()
{
    int n,bin=0,r,place=1;
    printf("Enter a number:");
    scanf("%d",&n);
    
    while(n!=0)
    {
        r=n%2;
        bin=bin+r*place;
        place=place*10;
        n=n/2;
    }
    printf("binary number=%d",bin);
    return 0;
}