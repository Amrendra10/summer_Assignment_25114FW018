#include<stdio.h>
int main()
{
    int n,i,a[20],ele,found=0;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to be search:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            found=1;
            printf("Element is found at %d position",i+1);
            break;
        }
    }
    if(found==0)
    printf("Element not found");

    return 0;
}