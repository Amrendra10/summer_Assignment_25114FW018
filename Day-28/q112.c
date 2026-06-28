#include <stdio.h>

struct Contact
{
    int id;
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[100];
    int n=0,choice,id,i,found;

    do
    {
        printf("\n~Contact Management System~\n");
        printf("1.Add Contact\n");
        printf("2.Display Contacts\n");
        printf("3.Search Contact\n");
        printf("4.Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter Contact ID: ");
                scanf("%d",&c[n].id);
                printf("Enter Name: ");
                scanf("%s",c[n].name);
                printf("Enter Phone Number: ");
                scanf("%s",c[n].phone);
                n++;
                printf("Contact Added Successfully\n");
                break;

            case 2:
                printf("\nContact List:\n");
                for(i = 0; i < n; i++)
                {
                    printf("ID:%d\n",c[i].id);
                    printf("Name:%s\n",c[i].name);
                    printf("Phone:%s\n\n",c[i].phone);
                }
                break;

            case 3:
                found = 0;
                printf("Enter Contact ID to Search: ");
                scanf("%d",&id);

                for(i=0;i<n;i++)
                {
                    if(c[i].id==id)
                    {
                        printf("\nContact Found\n");
                        printf("ID:%d\n",c[i].id);
                        printf("Name:%s\n",c[i].name);
                        printf("Phone:%s\n",c[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found\n");
                break;

            case 4:
                printf("Exiting...\n");
                break;

            default:
                printf("Invalid Choice\n");
        }
    } while(choice != 4);
    return 0;
}