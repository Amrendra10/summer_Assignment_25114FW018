#include<stdio.h>
int main()
{
    char str[100];
    int i,j,count,found=0;

    printf("Enter a string:");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=0;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
            }
        }
        if(count!=1)
        {
            printf("First repeating character:%c",str[i]);
            break;
        }
}
if(found==0)
{
    printf("No repeating character found");
}
return 0;
}