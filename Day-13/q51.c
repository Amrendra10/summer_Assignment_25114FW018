#include<stdio.h>
int main()
{
    int i,n,a[50],smallest, largest;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    smallest=largest=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<smallest)
        smallest=a[i];

        if (a[i]>largest)
        largest =a[i];
    }
    printf("Smallest element=%d\n",smallest);
    printf("Largest element=%d\n",largest);

    return 0;
}