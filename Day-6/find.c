#include<stdio.h>
int main()
{
    int x,n,result=1,i;
    scanf("%d %d",&x,&n);
    for(i=1;i<=n;i++)
    {
        result=result*x;
    }
    printf("%d",result);
    return 0;

}