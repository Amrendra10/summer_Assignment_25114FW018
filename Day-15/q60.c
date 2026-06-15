#include<stdio.h>
int main()
{
    int n,i,j=0,a[20];
    printf("Enter size of array:");
    scanf("%d",&n);
    

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
       if(a[i]!=0)
       {
        a[j]=a[i];
        j++;
       } 
    }
    while(j<n)
    {
        a[j]=0;
        j++;
    }
    
    printf("arrays after moving zeroes to end:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}
    