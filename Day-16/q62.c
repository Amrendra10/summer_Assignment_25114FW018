#include<stdio.h>
int main()
{
    int n,i,a[10],j,ele,maxfreq=0;
    printf("Enter size of elements:");
    scanf("%d",&n);

    printf("Enter elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<n;j++)
        {
            if(a[i]==a[j])
            count++;
        }
        if(count>maxfreq)
        {
            maxfreq=count;
            ele=a[i];
        }
    }
    printf("Maximum frequency element =%d",ele);
    return 0;

}