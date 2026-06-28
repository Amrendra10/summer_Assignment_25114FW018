#include<stdio.h>
struct Book
{
    int id;
    char title[50];
    char author[50];
};
int main()
{
    struct Book b[100];
    int n=0,choice,i,id,found;
    do
    {
        printf("\n~Library Management System~\n");
        printf("1.Add book\n");
        printf("2.Display Book\n");
        printf("3.Search Book By ID Number\n");
        printf("4.Exit\n");
        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
            printf("Enter Book ID: ");
            scanf("%d",&b[n].id);
            printf("Enter Book title: ");
            scanf("%s",b[n].title);
            printf("Enter author name: ");
            scanf("%s",&b[n].author);
            n++;
            break;

            case 2:
            printf("\nStudent Records\n");
            for(i=0;i<n;i++)
            {
                printf("Book ID:%d\n",b[i].id);
                printf("title:%s\n",b[i].title);
                printf("author:%s\n",b[i].author);
                
            }
            break;

            case 3:
            {
                found=0;

                printf("Enter book id to be searched:");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(b[i].id==id)
                    {
                        printf("Record Found\n");
                        printf("Book ID:%d\n",b[i].id);
                        printf("title:%s\n",b[i].title);
                        printf("author:%s\n",b[i].author);
                        found=1;
                        break;
                    }
                }
                if(found==0)
                {
                    printf("Book Not found\n");
                    break;
                }
            }
            case 4:
            printf("Exiting\n");
            break;

            default:
            printf("Invalid Choice\n");
        }
    } while (choice!=4);
    return 0;
        
}