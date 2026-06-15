#include<stdio.h>
int main()
{
    int n,i,temp,a[20];
    printf("Enter size of array:");
    scanf("%d",&n);
    

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    temp=a[0];
    for(i=0;i<n-1;i++)
    {
    a[i]=a[i+1];
    }
    a[n-1]=temp;
    
    printf("Array after left rotation:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
    