#include<stdio.h>
int main()
{
    int n,i,a[20],ele,count=0;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter element to find frequency:");
    scanf("%d",&ele);
    for(i=0;i<n;i++)
    {
        if(a[i]==ele)
        {
            count++;
        }
    }
    printf("Frequency of %d =%d",ele,count);
    return 0;
}