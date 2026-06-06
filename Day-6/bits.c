#include<stdio.h>
int main()
{
    int n, count=0;
    scanf("%d",&n);
    while(n>0)
    {
      count=count+n%2;
      n=n/2;
    }
    printf("%d",count);
    return 0;
}