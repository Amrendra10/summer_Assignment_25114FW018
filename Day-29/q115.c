#include<stdio.h>
int main()
{
    char str[100];
    int choice,i,length;
    char ch;

    printf("Enter a string:");
    scanf("%s",str);
    do
    {
        printf("\n~MENU~\n");
        printf("1.Display string\n");
        printf("2.Find length\n");
        printf("3.Reverse String\n");
        printf("4.Count vowels\n");
        printf("5.Exit\n");

        printf("Enter choice:");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("String=%s\n",str);
            break;

            case 2:
            length=0;
            while(str[length]!='\0')
            length++;
            printf("Length =%d\n",length);
            break;

            case 3:
            length=0;
            while(str[length]!='\0')
            {
            length++;
            printf("Reverse = ");
            for(i=length-1;i>=0;i--)
            {
            printf("%c",str[i]);
            }
            printf("\n");
            
        }
            break;

            case 4:
            length =0;
            for(i=0;str[i]!='\0';i++)
            {
                ch=str[i];
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
                ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
                {
                    length++;
                }
            }
            printf("Num of vowels =%d\n",length);
            break;

            case 5:
            printf("Exiting\n");
            break;

            default:
            printf("Invalid choice\n");
        }
    } while (choice!=5);
    return 0;
    
}