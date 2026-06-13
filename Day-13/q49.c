#include<stdio.h>
int main()
{
    int i,n,a[10];
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}