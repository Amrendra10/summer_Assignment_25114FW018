#include<stdio.h>
int main()
{
    int a[10][10],i,j,r,c,sum;
    printf("Enter row and column of matrix:");
    scanf("%d%d",&r,&c);

    printf("Enter matrix element:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        sum=0;
        for(j=0;j<c;j++)
        {
            sum=sum+a[i][j];
        }
        printf("sum of row %d:%d\n",i+1,sum);
    }
    return 0;
}