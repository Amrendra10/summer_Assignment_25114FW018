#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    int i,j,count=0;

    printf("Enter first string:");
    scanf("%s",str1);
    printf("Enter second string:");
    scanf("%s",str2);

    if(strlen(str1)!=strlen(str2))
    {
        printf("Not anagram");
        return 0;
    }

    for(i=0;str1[i]!='\0';i++)
    {
        count=0;
        for(j=0;str2[j]!='\0';j++)
        {
            if(str1[i]==str2[j])
            {
                count=1;
                break;
            }
        }
        if(count==0)
        {
            printf("Not anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}