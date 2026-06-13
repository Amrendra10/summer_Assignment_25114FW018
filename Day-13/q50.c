#include<stdio.h>
int main()
{
    int i,n,a[10],sum =0;
    float avg;
    printf("Enter size of array:");
    scanf("%d",&n);

    printf("Enter array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
         sum=sum+a[i];
    }
    avg=(float)sum/n;

    printf("Sum of array elements:%d\n",sum);
    printf("Average of array elements:%.2f\n",avg);
    return 0;
}