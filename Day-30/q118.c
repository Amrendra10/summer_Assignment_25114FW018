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
    int n,i;
    printf("Enter number of books:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nBook%d\n",i+1);
        printf("Enter book id:");
        scanf("%d",&b[i].id);
        printf("Enter book title:");
        scanf(" %[^\n]",b[i].title);
        printf("Enter author name:");
        scanf(" %[^\n]",b[i].author);
    }
    printf("\n~Library Records~\n");
    for(i=0;i<n;i++)
    {
        printf("\nBook%d\n",i+1);
        printf("Book ID:%d\n",b[i].id);
        printf("Title:%s\n",b[i].title);
        printf("Author:%s\n",b[i].author);
    }
    return 0;
}