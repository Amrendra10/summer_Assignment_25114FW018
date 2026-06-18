#include<stdio.h>
int main()
{
    int n,i,a[20],start,end,ele,mid;
    printf("Enter size:");
    scanf("%d",&n);

    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter element to be searched:");
    scanf("%d",&ele);

    start=0;
    end=n-1;
    
    while(start<=end)
    {
        mid=(start+end)/2;
    
    if(a[mid]==ele)
    {
        printf("Element is found at %d position",mid+1);
        return 0;
    }
    else if(a[mid]<ele)
    {
        start=mid+1;
    }
    else
    {
        end=mid-1;
    }
}
    printf("Element not found");
    return 0;
}