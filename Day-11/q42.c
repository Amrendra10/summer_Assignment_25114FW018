#include<stdio.h>
int max (int a,int b)
{
    return max(a,b);
}
int main()
{
    int x,y,max;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    max=(x>y)? x:y;
    printf("maximum=%d",max);
    return 0;
}