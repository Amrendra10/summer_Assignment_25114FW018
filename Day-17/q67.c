#include<stdio.h>
int main()
{
    int n1,n2,i,a[20],b[20],c[20],j;
    printf("Enter size of first array:");
    scanf("%d",&n1);
  
    printf("Enter elements in first array:");
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Enter size of second array:");
    scanf("%d",&n2);

    printf("Enter elements in second array:");
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
    }
    printf("Intersection of arrays:");
    for(i=0;i<n1;i++)
    {
        int flag=0;
        for(j=0;j<i;j++)
        {
            if (a[i]==a[j])
            {
                flag =1;
                break;
            }
        }
        if (flag==0)
        {
        for(j=0;j<n2;j++)
        {
            if(a[i]==b[j])
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
}
    return 0;
}

   