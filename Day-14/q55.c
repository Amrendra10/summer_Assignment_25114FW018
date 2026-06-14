#include<stdio.h>
int main()
{
    int n,a[20],i,largest,second;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    largest=second=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            second=largest;
            largest=a[i];
        }
        else if(a[i]>second&&a[i]!=largest)
        {
            second=a[i];
        }
    }
    printf("Second largest element=%d",second);
    return 0;
}