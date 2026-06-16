#include<stdio.h>
int main()
{
    int n,i,a[10],j,sum;
    printf("Enter size of elements:");
    scanf("%d",&n);

    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter required sum:");
    scanf("%d",&sum);

    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==sum)
            {
                printf("Pair found:%d %d",a[i],a[j]);
                return 0;
            }
    }
}
printf("Pair not found");
    
    return 0;

}