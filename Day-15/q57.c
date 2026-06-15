#include<stdio.h>
int main()
{
    int n,a[20],i;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse elements:");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",a[i]);
    }
    return 0;
}