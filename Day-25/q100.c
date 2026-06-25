#include<stdio.h>
#include<string.h>
int main()
{
    char str[10][50],temp[50];
    int i,j,n;
    printf("Enter number of words:");
    scanf("%d",&n);
    printf("Enter words:\n");
    for(i=0;i<n;i++)
    {
    scanf("%s",str[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strlen(str[i])>strlen(str[j]))
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
    printf("Names in alphabetical order:\n");
    for(i=0;i<n;i++)
    {
        printf("%s\n",str[i]);
    }
    return 0;
}