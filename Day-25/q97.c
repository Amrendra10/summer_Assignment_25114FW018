#include<stdio.h>
int main()
{
    int a[20],b[20],c[20],i,j,m,n,k;

    printf("Enter size of first array:");
    scanf("%d",&n);
    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of second array:");
    scanf("%d",&m);
    printf("Enter array elements:");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    i=j=k=0;
    while(i<n&&j<m)
    {
        if(a[i]<b[j])
        {
            c[k++]=a[i++];
        }
        else
        {
            c[k++]=b[j++];
        }
    }
    while(i<n)
    {
        c[k++]=a[i++];
    }
    while(j<m)
    {
        c[k++]=b[j++];
    }
    printf("Merged array:");
    for(i=0;i<k;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
    
}